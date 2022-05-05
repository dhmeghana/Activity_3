PROJ_NAME = String_to_Ascii
SRC = src/ASCII1.c\
src/Sum.c\



ifdef os
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif

INC = -Iinc\


Build:
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
run:Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

# Build_test:
# 	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
# run_test:Build_test
# 	./$(call FixPath,$(PROJ_NAME).$(EXEC))

dynamiccheck:
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))