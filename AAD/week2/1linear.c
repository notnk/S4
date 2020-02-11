#include<stdio.h>
#include<time.h>
#include<math.h>
void main()
{
	int a[1000000],n,f;
	double m;
	clock_t t1,t2;
	printf("Enter the size:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		a[i]=rand();
	t1=clock();
	printf("Enter the element to be found:");
	scanf("%d",&f);
	for(int i=0;i<n;i++)
		if(f==a[i])		
			printf("Found!");
		else
			printf("Not Found!");
	t2=clock();
	m=t2-t1/(double)CLOCKS_PER_SEC;
	FILE *fp;
	fp=fopen("1.dat","a");
	fprintf(fp,"%d\t%f\n",n,m);
	fclose(fp);
}
