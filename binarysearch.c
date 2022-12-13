#include<stdio.h>
int binary_search(int *arr,int n,int se)
{
	int i=0,j=n-1,m;
	while(i<=j)
	{
    	m=(i+j)/2;
		if(arr[m]==se)              //binary search
		{
			return 1;
		}
		else if(arr[m]<se)  //elements in sorted order(ascendind or descending)
		{
			i=m+1;
		}
		else
		{
			j=m-1;
		}
	}
		return 0;
}
int main()
{
	int n,i=0,j=n-1,arr[100],m,se,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	k=(binary_search(arr,n,se));
	if(k!=-1)
	{
		printf("%d",k);
	}
	else
	{
		printf("not found");
	}
}
