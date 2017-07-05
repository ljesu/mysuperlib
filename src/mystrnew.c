#include <stdlib.h>
char* mystrnew(int size)
{
	int i;
	i = 0;
	char *str;
	str = (char*)malloc(sizeof(char)*(size+1));
	while ( i < size+1 )
	{
	str[i] ='\0';
	i = i+1;
	}
	return(str);
}
