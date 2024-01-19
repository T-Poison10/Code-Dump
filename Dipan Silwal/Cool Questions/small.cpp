#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define d 500
void string();
int main()
{
	string();
	return 0;
}
void string()
{
	char str[d],dip[d];
	int i,count=0;
	printf("Enter your string:\n");
	fgets(str,d,stdin);
	while (str!=NULL)
	{
		if(islower(str[i]))
		{
			printf("The First Small Letter in the string is:- %c\n",str[i]);
   			count++;
   			break;
		}
		i++;
	}
	if (count==0)
	{
		printf("There are no small letters in the given string.");
	}

}
