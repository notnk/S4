#include<stdio.h>
#include<time.h>
#include<math.h>
void main()
{
	int a[1000000],t,n,f,l=0,u,mid;
	double m;
	clock_t t1,t2;
	printf("Enter the size:");
	scanf("%d",&n);
	u=n-1;
	for(int i=0;i<n;i++)
		a[i]=rand();
	t1=clock();
	for (int i=0;i<n;++i) 
        {
                for (int j=i+1;j<n;++j)
            	{
	                if (a[i]>a[j]) 
	                {
	                	t=a[i];
				a[i]=a[j];
				a[j]=t;
	                }
		}
	}
	printf("Enter the element to be found:");
	scanf("%d",&f);
	while(l<u)
	{
		mid=(l+u)/2;
		if(a[mid]==f)
			printf("Found");
		else if(a[mid]>f)
			u=mid-1;
		else
			l=mid+1;
	}
	t2=clock();
	m=t2-t1/(double)CLOCKS_PER_SEC;
	FILE *fp;
	fp=fopen("2.dat","a");
	fprintf(fp,"%d\t%f\n",n,m);
	fclose(fp);
}
