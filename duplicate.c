#include<stdio.h>
int main()
{
	char str[100];
	int c=0,i,j;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				c++;
				str[j]=-1;
			}
		}
	}
	printf("%d",c);
}

