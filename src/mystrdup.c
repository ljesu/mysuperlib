#include <stdlib.h>
#include <stdlib.h>
int mystrlen( const char *str);
char* mystrdup(const char *str)
{
int size;
char* dst;
int i;
i = 0;
size = mystrlen(str);
dst = (char*)malloc(sizeof(char)*(size+1));
while ( str[i] != '\0' )
{
dst[i] = str[i];
i = i+1;
} 
return(dst);
}
