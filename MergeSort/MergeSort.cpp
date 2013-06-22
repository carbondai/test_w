/*#include <stdio.h>
#include <time.h>

#define N 10000

void MergeSort(int a[],int left,int right);
void Merge(int a[],int left,int mid,int right,int temp[]);

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
	MergeSort(a,0,N-1);
	finish=clock();
	cost=(double)(finish-start)/CLOCKS_PER_SEC;
	printf("¹é²¢ÅÅÐòºÄÊ±%f\n",cost);
	fp=fopen("Sorted.txt","w");
	for(i=0;i<N;i++)
	{
		fprintf(fp,"%d\t",a[i]);
	}
	fclose(fp);
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
}*/