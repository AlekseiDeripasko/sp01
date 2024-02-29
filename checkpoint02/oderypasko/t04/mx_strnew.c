#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size)
{
    if(size < 0)
        return NULL;
    char *new = (char *)malloc(sizeof(char)*size+1);
    if (new == NULL)
        return NULL;
    for(int i = 0; i < size+1; i++)
    {
        new[i] = '\0';
    }
    return new;
}



