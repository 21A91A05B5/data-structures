#include<stdio.h>
int (insertion_sort(int *arr,int n))
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp>arr[j])
			{
				arr[j+1]=temp; //true
				break;
			}
			else
			{
				arr[j+1]=arr[j]; //false
			}
		}
	}
	if(j==-1)
	{
		arr[j]=temp;
	}
    
}
int main()
{
	int n,i,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n); //fun call
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	
	
}
