#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    ptr=(char*)malloc(20*sizeof(char));

    printf("Enter a string: ");
    scanf("%[^\n]s",ptr);

    printf("%X\n",sum(ptr));
    free(ptr);
    return 0;
}
hello 
