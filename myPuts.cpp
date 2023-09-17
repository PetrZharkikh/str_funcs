#include <stdio.h>
#include <math.h>
#include <string.h>

int myPuts(const char *str);

int main(void)
{
    const char * str="ancpwqn";
    myPuts(str);
    return 0;
}

int myPuts(const char *str)
{
    int i=0;
    char a;
    while ((a=*(str+i))!='\0')
        {
        putchar(a);
        i++;
        }
    return 1;
}
