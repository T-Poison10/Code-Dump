#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define d 500
int main()
{
	char hold[20],str[200];
	int len,i,j=0;
	printf("Enter a string:\n");
	fgets(str,20,stdin);
	len=strlen(str);
	char dip[20];
	for (i=0;i<len;i++)
	{
		strncpy(dip,str,i);
		puts(dip);
	}
}
