#include<stdio.h>
void sort(int a[])
{
	int i,j,temp;
	for(i=1;i<4;i++)
	{
		j=i-1;
		temp=a[i];
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
		
	}
	for(i=0;i<4;i++)
	 printf("%d\n",a[i]); 
}
int main()
{
	int i,j,c=0;
	int a[4],r[4];
	printf("\nEnter time to reach destination:");
	for(i=0;i<4;i++)
	 scanf("%d",&a[i]);
	 sort(a);
}

