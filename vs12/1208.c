#include<stdio.h>
#include<stdlib.h>
int *make_array(int elem);
void show_array(const int ar[],int n);
int main(void)
{
    int *pa;
    int size;
    int value;
    printf("enter the number of element:");
    while(scanf("%d",&size)==1&&size>0)
    {
        
        pa= make_array(size);
        if(pa)
        {
            show_array(pa,size);
            free(pa);

        }
        printf("enter the number of element(<1 to quit):");

    }
    printf("done.\n");
    return 0;
}
int *make_array(int elem)
{
   int *ptd;
    int i=0;
    ptd=(int *)malloc(elem *sizeof(int));
      printf("enter the initialization value:");
       
    if(ptd!=NULL)
    {
       while(i<elem &&scanf("%d",&ptd[i])==1)
          i++;
          //如果输入超过数组的长度，是需要clear buff的。这是清除多余的数字。
        while(getchar()!='\n')
          continue;   
    }
    return ptd;
}
void show_array(const int ar[], int n)
{
	// print contents of an array of ints, 8 elements to a line
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", ar[i]);
		if (i % 8 == 7)
			putchar('\n');
	}
	if (i % 8 != 0)
		putchar('\n');
}