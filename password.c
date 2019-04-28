#include<stdio.h>
#include<string.h>
int password(char *str)
{
	int i=0,c,a,flag=0,f1=0,f2=0,f3=0,f4=0;
	while(str[i]!='\0')
		i++;
	if(i>=8)
	{
		for(c=0;c<=i;c++)
		{
			if(str[c]>='A' && str[c]<='Z' && f1==0)
				{
				f1++;
				flag++;
				
				}
			else if(str[c]>='a' && str[c]<='z' && f2==0)
				{
				flag++;
				f2++;
				}
			else if(str[c]<=0 && str[c]<=9 && f3==0)
				{
				flag++;
				f3++;
				}
			else if(f4==0)
				{
				flag++;
				f4++;
				}
		}
		if(flag==4)
			return flag;
		else
			printf("Invalid Password");
	}
	else
		printf("\nInvalid Password...password must be more than 8 characters long!");
	
}

int main()
{
	char str[200],str2[200];
	printf("Enter password\t");
	gets(str);
	password(str);
	if (password(str)==4)
	{
		printf("Re-enter password\t");
		gets(str2);
		if(strcmp(str,str2)==0)
			printf("Password valid...continue");
		else
			printf("Passwords do not match");
	}
	
}
