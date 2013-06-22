/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define F_PATH "E:/Program/MergeSort/RandNum.txt"

int main(int argc, char *argv[])
{
	int i;
	int n=10000;
	FILE *fp=NULL;
	fp=fopen("RandNum.txt","w");
	if(NULL==fp)
	{
		return -1;
	}
	srand((int)time(0));
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%d\n",rand()%n);
	}
	fclose(fp);
	return 0;
}*/