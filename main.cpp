#include<stdio.h>
int main()
{
    printf("ASCII values for upper case letters A-Z:\n ");
    for(char a = 'A' ; a <= 'Z' ; ++a)
    {
        printf("%a: %d\n", a, (int)a);
    }
    printf("ASCII values for lower case letters a-z:\n");
    for(char a = 'a' ; a <= 'z'; ++a )
    {
        printf("%a: %d\n", a, (int)a);
    }
    return(0);
}
