#if(1)
#include<stdio.h>
int main(void)
{
    int zippo[4][2]={{2,4},{6,8},{1,3},{5,7}};
    printf("zippo[0][0]=%d\n",zippo[0][0]);
    printf("*zippo[0]=%d\n",*zippo[0]);
    printf("**zippo=%d\n",**zippo);
    printf("zippo[2][1]=%d\n",zippo[2][1]);
    printf("*(*(zippo+2)+1)=%d\n",*(*(zippo+2)+1));
    printf("*zippo+1=%d",*(*zippo+1));


}
#endif
