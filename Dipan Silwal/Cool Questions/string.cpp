#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define DIPAN 500
void string();
int main()
{
    string();
}
void string()
{
	int c = 0, count = 0,i=0;
    char s[DIPAN],dip[]=" ",temp[DIPAN];
    printf("Input a string\n");
    fgets(s,DIPAN,stdin);
    strcpy(temp,s);
	char* token = strtok(temp, dip);
	printf("\nWORDS HAVING TWO CONSECUTIVE VOWELS IN THEM ARE:\n");
	while(s[c] != NULL)
	{
		
		if (s[c]=='a'||s[c]=='A'||s[c]=='e'||s[c]=='E'||s[c]=='i'||s[c]=='I'||s[c]=='o'||s[c]=='O'||s[c]=='u'||s[c]=='U')
        {
            if (s[c+1]=='a'||s[c+1]=='A'||s[c+1]=='e'||s[c+1]=='E'||s[c+1]=='i'||s[c+1]=='I'||s[c+1]=='o'||s[c+1]=='O'||s[c+1]=='u'||s[c+1]=='U')
            {
				count++;
                printf("%s\n", token);
                while (s[c]!=' ')
                {
                	c++;
				}
            }
        }
        if (s[c]==' ')
		{
			if (token != NULL)
				{
					token = strtok(NULL, dip);
				}
		}
		c++;
		
    }
    if (count==0)
    {
    	printf("There are no words having consecutive vowels in them.:(");
	}
}
