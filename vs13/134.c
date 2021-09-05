#include <stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    FILE *fp;
    double n;
    double sum=0.0;
    int ct=0;
    if(argc==1)
      fp=stdin;
      else if(argc==2)
      {
          if((fp=fopen(argv[1],"r"))==NULL)
               {
                   fprintf(stderr,"cant open %s\n",argv[1]);
                   exit(EXIT_FAILURE);
               }
      }
      else 
      {
          fprintf(stderr,"usage:%s [filename]\n",argv[0]);
          exit(EXIT_FAILURE);
      }
       while(fscanf(fp,"%lf",&n)==1)
       {
           sum += n;
           ct++;
       }
       if(ct>0)
       printf("average of %d values=%f\n",ct,sum/ct);
       else
       printf("no valid data.\n");
       return 0;
       
}