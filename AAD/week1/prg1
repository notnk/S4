#include<time.h>
#include<stdio.h>
void main()
{
	int a[1000000],ch,x;
	clock_t t1,t2;
	double m,n;
	//printf("Enter the size of the array:");
	//scanf("%f",&n);
	n=999999;
	printf("Enter the elements of the array:\n");
	for(int i=0;i<n;i++)
		a[i]=i;
	t1=clock();
	printf("1.Remove an element.\n2.Return the largest.\nEnter your choice:");
	scanf("%d",&ch);
	printf("Enter the pos of the ele:");
	scanf("%d",&x);
	int s=a[x];
	switch(ch)
	{
		case 1:	for(int i=x;i<n;i++)
				a[i]=a[i+1];
			printf("Array after deletion\n");
			n--;
			for(int i=0;i<n;i++)
				printf("%d",a[i]);
			break;
		case 2:	for(int i=1;i<=n-x;i++)
				if(s<a[x+i])
				{	
					s=a[x+i];	
					break;
				}
				printf("%d is greater.",s);
			break;
	}
	//for(double i=0;i<999999;i++)
	t2=clock();
	m=(t2-t1)/(double)CLOCKS_PER_SEC;
	printf("\ntime diff is:%f",m);
}
