#include<stdio.h>
#include<time.h>
#include<math.h>
void main()
{
	double a[1000],n,f,m,z=1000;
	clock_t t1,t2;
	t1=clock();
	n=rand() + z;
	f=rand() + z;
	for(int i=0;i<n;i++)
		a[i]=i;
	for(int i=0;i<n;i++)
		if(f==a[i])		
			printf("Found!");
		else
			printf("Not Found!");
	t2=clock();
	m=t2-t1/(double)CLOCKS_PER_SEC;
	FILE *fp;
	fp=fopen("test.dat","a");
	fprintf(fp,"\n%fis the size\n%f is the time diff.",n,m);
	fclose(fp);
}
