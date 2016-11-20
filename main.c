#include "mystring.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int from=3, n=11;
	char string1[]="testing this stuff", string2[]="here is another 21234", buff[n], *returned;
	returned = safestrcat(string2,string1);
	printf("%s\n",returned);
	free(returned);
	substring(string1,from,n,buff);
	printf("%s\n",buff);
	return 0;
}
