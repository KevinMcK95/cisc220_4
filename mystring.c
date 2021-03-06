#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mystring.h"

char* safestrcat(char *a, char *b)
{
	int i=strlen(a), j=strlen(b), k=0;
	char *result;
	result = malloc(sizeof(char*)*(i+j));
	for(k=0; k<=(i+j); ++k){
		if (k <= i-1){
			result[k] = a[k];
		}
		else if( k <= (i+j-1) ){
			result[k] = b[k-i];
		}
		else{
			result[k] = '\0';
		}
	}
	return result;
}

int substring(char *source, int from, int n, char *targets)
{
	int i = 0, length=strlen(source);
	if ( (from+n) > length || n < 1 || from < 0){
		return -1;
	}
	for(i=0; i<n; ++i){
		targets[i] = source[i+from];
	}
	return 0;
}

