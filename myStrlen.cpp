#include <stdio.h>
#include <math.h>
#include <string.h>

size_t myStrlen(const char *str);

int main(void)
{
    const char * str = "bebvba1plm";
    //myStrchr(str, 'a');
    printf("%d", myStrlen(str));
    return 0;
}

size_t myStrlen(const char *str)
{
    int i=0;
    while (*(str+i)!='\0')
        i++;
    return i;

}
