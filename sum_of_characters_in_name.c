/**
 * @file sum_of_characters_in_name.c
 * @author Meghana DH
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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
int sum(char *Str)
{
    int S=0;
int len = strlen(Str);
    for (int i= 0;i<len; i++)
    {
        S=S+Str[i];
    }
return S;
}