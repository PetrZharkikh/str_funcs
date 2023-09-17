#include <stdio.h>
#include <math.h>
#include <string.h>

char* myStrchr(const char * str, int ch);

int main(void)
{
const char * str = "bebvbaplm";
printf("%d", myStrchr(str, 'p'));
return 0;
}

char* myStrchr(const char * str, int ch)
{
    int i=0;
    //int Flag=0;
    while (*(str+i)!=ch and i<strlen(str))
          {
          i++;
          }
    if (i==strlen(str))
        return 0;
    else
        return (char*)(str+i);



}
