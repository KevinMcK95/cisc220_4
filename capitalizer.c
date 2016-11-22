#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> //for the toupper(char) function

int main(int argc, char **argv)
{
	FILE *fp = fopen(argv[1],"r+");
	char c;
	int capTest = -1;
	while ((c = fgetc(fp)) != EOF) {
		if (capTest == -1){
			c = toupper(c);
			capTest = 0;
		}
		if (c == ' ')
			capTest++;
		if (capTest == 2)
			capTest = -1;
		if (c=='\n'){
			capTest = -1;
		}
		fseek(fp, -1, SEEK_CUR); //move back 1 place to replace the char
		fprintf(fp,"%c",c);
	}
	fclose(fp);
	return 0;
}
