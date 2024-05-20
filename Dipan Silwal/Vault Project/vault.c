//Needs fixes
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len,c=0,hold,d,count=0;
	char inp[100],name[100],email[100],pass[100];
	FILE *fl;
	fl=fopen("pass.bin","r");
	if (fl == NULL)
	{
		FILE *fl1;
		fl1=fopen("pass.bin","w");
		printf("Create your password:");
		scanf("%s",name);
		fprintf(fl1,"%s",name);
		fclose(fl1);
		printf("Password Created Successfully!!");
	}
	system("cls");
	fscanf(fl,"%s",&name);
	printf("Enter your pass:");
	label1:
	fgets(inp,100,stdin);
	len=strlen(name);
	for(i=0;i<len;i++)
	{
		if(name[i]==inp[i])
		{
			c++;
			if(c==len)
			{
				label2:
				fflush(stdin);
				system("cls");
				printf("Welcome to vault:)\n");
				printf("To change or create password press 1\nTo login press 2\nTo update list press 3.\n");
				scanf("%d",&hold);
				if(hold==1)
				{
					c=0;
					FILE *passw;
					passw=fopen("password.bin","r");
					if (passw == NULL)
					{
						FILE *passw1;
						passw1=fopen("password.bin","w");
						printf("Create a password");
						scanf("%s",name);
						fprintf(passw1,"%s",name);
						fflush(stdin);
						fclose(passw1);
					}
					fflush(stdin);
					fscanf(passw,"%s",&name);
					printf("Enter old pass:");
					scanf("%s",inp);
					len=strlen(name);
					fclose(passw);
					for (i=0;i<len;i++)
					{
						if(name[i]==inp[i])
						{
							c++;
							if(len==c)
							{
								FILE *ent;
								ent=fopen("password.bin","w");
								printf("Enter your new password:");
								scanf("%s",name);
								fprintf(passw,"%s",name);
								fclose(ent);
							}
						}
					}
					fclose(passw);	
				}
				else if (hold==2)
				{
					FILE *password;
					fflush(stdin);
					c=0;
					password=fopen("password.bin","r");
					fscanf(password,"%s",&name);
					len=strlen(name);
					printf("Enter your password:");
					scanf("%s",&inp);
					system("cls");
					for(i=0;i<len;i++)
					{
						if(name[i]==inp[i])
						{
							c++;
							if(c==len-1)
							{
								FILE *fb;
								fb=fopen("facebook.bin","r");
								fflush(stdin);
								printf("Welcome to store room!!\n");
								printf("Which cresidential do you wanna view?\n");
								printf("1.Facebook\n2.Instagram\n------>");
								scanf("%d",&hold);
								if (fb == NULL)
								{
									printf("There are no cresidentials saved!!!\n");
									goto entry;
								}
								printf("---------------------------------------\n");
								if(hold==1)
								{
									d=0;
									c=fgetc(fb);
									system("cls");
									printf("Your facebook email and password is:");
									printf("\n*********************************\n");
									while(c!=EOF)
									{
										putchar(c);
										c=fgetc(fb);	
										if(c=='\n')
										{
											d++;
											if(d%2==0)
											{
												printf("\n---------------------------------");
														
											}
										}
									}
								}
								else if(hold==2)
								{	
									FILE *inst;
									inst=fopen("instagram.bin","r");
									if(inst==NULL)
									{
										printf("There are no cresidentials saved!!!\n");
										goto entry;
									}
									c=fgetc(inst);
									system("cls");
									printf("Your Instagram email and password are:");
									printf("\n*********************************\n");
									while(c!=EOF)
									{
										putchar(c);
										c=fgetc(inst);
										if(c=='\n')
										{
											d++;
											if(d%2==0)
											{
												printf("\n---------------------------------");
											}
										}
									}	
								}
								fclose(fb);	
							}
						}
					}
					fclose(password);
				}
				else if (hold== 3);
				{
					entry:
					fflush(stdin);
					printf("Which entry do you want??\n");
					printf("1.Facebook\n2.Instagram\n");
					scanf("%d",&hold);				
					if (hold == 1)
					{
						FILE *store1;
						store1=fopen("facebook.bin","a");
						fflush(stdin);
						printf("Enter your facebook email and password:\nEmail--->");
						fgets(email,100,stdin);
						printf("Password--->");
						fgets(pass,100,stdin);
						fprintf(store1,"%s%s",email,pass);
						fclose(store1);
					}
					else if (hold ==2)
					{				
						fflush(stdin);		
						FILE *store2;
						store2=fopen("instagram.bin","a");
						printf("Enter your instagram email and password:\nEmail--->");
						fgets(email,100,stdin);
						printf("Password--->");
						fgets(pass,100,stdin);
						fprintf(store2,"%s%s",email,pass);
						fclose(store2);
					}
				}
			}
		}
		else
		{
			if (count==2)
			{
				printf("YOU HAVE HAD 3 INCORRECT ATTEMPT TO LOGIN!!");
				exit(1);
			}
			system("cls");
			printf("The password you entered is wrong!!\nTRY AGAIN----->");
			count++;
			goto label1;
		}
	}
	fclose(fl);
}