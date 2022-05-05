#include "main.c"

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