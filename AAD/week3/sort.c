#include<time.h>
#include<stdio.h>
void buble(int a[],int n)
{
	int t;
	for(int i=0;i<n;i++)
		for(int j=i;j<n-i-1;j++)	
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}	
}
void sel(int array[],int n)
{	
	int position,t;
	for(int c=0;c<(n-1);c++)
	{
    		position = c;
		for(int d=c+1;d<n;d++)
		{
			if(array[position]>array[d])
        			position = d;
    		}
    		if(position!=c)
		{
      			t=array[c];
			array[c]=array[position];
			array[position]=t;
    		}
  	}
}
void ins(int arr[],int n)
{
	int temp,j,i;
	 for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {	        
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
   }

void quick(int number[25],int first,int last)
{
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quick(number,first,j-1);
      quick(number,j+1,last);

   }
}
void main()
{
	int a[1000000],n;
	clock_t t1,t2;
	double m1;
	printf("Enter the size:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		a[i]=rand();
		
	printf("BUBBLE sort\n");
	t1=clock();
	buble(a,n);
	t2=clock();
	m1=(t2-t1)/(double)CLOCKS_PER_SEC;
	FILE *fp;
	fp=fopen("buble.dat","a");
	fprintf(fp,"%d\t%f\n",n,m1);
	//fclose(fp);
	
	printf("SELECTION sort\n");
	t1=clock();
	sel(a,n);
	t2=clock();
	m1=(t2-t1)/(double)CLOCKS_PER_SEC;
	//FILE *fp;
	fp=fopen("selection.dat","a");
	fprintf(fp,"%d\t%f\n",n,m1);
	//fclose(fp);
	
	printf("QUICK sort\n");
	t1=clock();
	quick(a,0,n-1);
	t2=clock();
	m1=(t2-t1)/(double)CLOCKS_PER_SEC;
	//FILE *fp;
	fp=fopen("quick.dat","a");
	fprintf(fp,"%d\t%f\n",n,m1);
	fclose(fp);
	
	printf("INSERTON sort\n");
	t1=clock();
	ins(a,n);
	t2=clock();
	m1=(t2-t1)/(double)CLOCKS_PER_SEC;
	//FILE *fp;
	fp=fopen("insertion.dat","a");
	fprintf(fp,"%d\t%f\n",n,m1);
	//fclose(fp);
}
