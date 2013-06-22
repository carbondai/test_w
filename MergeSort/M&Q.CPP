#include <stdio.h>
#include <time.h>

#define N 8000

void MergeSort(int a[],int left,int right);
void Merge(int a[],int left,int mid,int right,int temp[]);

void QuickSort(int a[],int p,int r);
int Partition(int a[],int p,int r);
void Swap(int *s,int *t);

int main()
{
	int i;
	int a[N],b[N];
	clock_t start,finish;
	double cost;
	FILE *fp;
	fp=fopen("RandNum.txt","r");
	for(i=0;i<N;i++)
	{
		fscanf(fp,"%d",&a[i]);
		b[i]=a[i];
	}
	fclose(fp);
	start=clock();
	MergeSort(a,0,N-1);
	finish=clock();
	cost=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("归并排序耗时%f\n",cost);
	fp=fopen("Sorted.txt","w");
	for(i=0;i<N;i++)
	{
		fprintf(fp,"%d\t",a[i]);
	}
	fclose(fp);

	start=clock();
	QuickSort(b,0,N-1);
	finish=clock();
	cost=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("快速排序耗时%f\n",cost);
	fp=fopen("Sorted2.txt","w");
	for(i=0;i<N;i++)
	{
		fprintf(fp,"%d\t",b[i]);
	}
	return 0;
}

void MergeSort(int a[],int left,int right)
{
	int mid;
	int temp[N];
	if(left<right)
	{
		mid=(left+right)/2;
		MergeSort(a,left,mid);
		MergeSort(a,mid+1,right);
		Merge(a,left,mid,right,temp);

	}
}

void Merge(int a[],int left,int mid,int right,int temp[])
{
	int i=left,j=mid+1;
	int k=0;
	while ((i<=mid)&&(j<=right))
	{
		if(a[i]<=a[j])temp[k++]=a[i++];
		else temp[k++]=a[j++];
	}
	while (i<=mid)
		temp[k++]=a[i++];
	while (j<=right)
		temp[k++]=a[j++];
	for (i=0;i<k;i++)
		a[left+i]=temp[i];
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
}