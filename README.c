#include <stdio.h>

int main(void) {
	// your code goes here
	int i,j,n,a[10],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(a[j]<a[j+1])
	        {
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	        }
	    }
	}
	for(i=n-1;i>2;i--)
	{
	    printf(" the least number is %d",a[i]);
	    
	}
	
	return 0;
}

