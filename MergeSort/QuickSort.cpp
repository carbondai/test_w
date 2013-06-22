/*#include <stdio.h>
#include <time.h>

#define N 10000

void QuickSort(int a[],int p,int r);
int Partition(int a[],int p,int r);
void Swap(int *s,int *t);

int main()
{
	int i;
	int a[N];
	clock_t start,finish;
	double cost;
	FILE *fp;
	fp=fopen("RandNum.txt","r");
	for(i=0;i<N;i++)
	{
		fscanf(fp,"%d",&a[i]);
		//printf("%d\t",a[i]);
	}
	fclose(fp);
	start=clock();
	QuickSort(a,0,N-1);
	finish=clock();
	cost=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("¿ìËÙÅÅÐòºÄÊ±%f\n",cost);
	fp=fopen("Sorted2.txt","w");
	for(i=0;i<N;i++)
	{
		fprintf(fp,"%d\t",a[i]);
	}
	fclose(fp);
	return 0;
}

void QuickSort(int a[],int p,int r)
{
	if(p<r)
	{
		int q=Partition(a,p,r);
		QuickSort(a,p,q-1);
		QuickSort(a,q+1,r);
	}
}

int Partition(int a[],int p,int r)
{
	int i=p,j=r+1;
	int x=a[p];
	while(true)
	{
		while(a[++i]<x);
		while(a[--j]>x);
		if(i>=j)break;
		Swap(&a[i],&a[j]);
	}
	a[p]=a[j];
	a[j]=x;
	return j;
}

void Swap(int *s,int *t)
{
	int temp;
	temp=*s;
	*s=*t;
	*t=temp;
}*/