#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[100];
	scanf("%s",s);
	int n=strlen(s);
	int t=n-1;
	for(int i=0;i<n;i++)
	{int m=n/2;
		for(int j=0;j<n;j++)
		{
			if(j>=t)
			{if(m==n)
			{
				m=0;
			}
				printf("%c",s[m++]);
				
			}
			else
			{
				printf(" ");
			}
		}printf("\n");t--;
	}
}
