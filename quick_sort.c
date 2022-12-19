#include<stdio.h>
void partition(int *arr,int L,int n)
{
	int i,j,temp,p;
	p=n-1;
	for(i=L,j=L;j<p;j++)
	{
		if(arr[j]<arr[p])
		{
			temp=arr[j];
			arr[i]=arr[j];
			arr[i]=temp;
			i++;
		}
		
	}
	temp=arr[i];
	arr[i]=arr[p];
	arr[p]=temp;
	
}
void quick_sort(int *arr,int L,int n)
{
	partition(arr,L,n);
}
#include<stdio.h>
int mian()
{
	int n,i,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
