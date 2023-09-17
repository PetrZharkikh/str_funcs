#include <stdio.h>
#include <math.h>
#include <string.h>

char* myStrcpy(char * dest, const char*str);

int main(void)
{
const char * str = "bebvbaplm";
char * dest = "wkmfemfmfm";
dest=myStrcpy(dest, str);
printf("%s", dest);
return 0;
}

char* myStrcpy(char * dest, const char*str)         //использовать strlen
{
    unsigned int i=0;
    //int Flag=0;
    printf("%d\n", strlen(dest));
    while (i<strlen(dest))
          {
          printf("iteration %u\n", i);
          *(dest+i)=str+i;
          printf("copied\n");
          i++;
          printf("%u\n", i);
          }
    return dest;
}

