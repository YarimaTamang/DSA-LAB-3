#include<stdio.h>
int main()
{
	int a[10],s,i,n;
	
	printf("enter a array size\n");
	scanf("%d",&n);
	
	printf("enter a array element\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter a number u want to search\n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s){
			printf("%d is found in %d location",s,i+1);
			break;
		}
	}
	if(i==n)
{
	printf("%d is not present on array",s);
}
	return 0;
		
}

