#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20]; 
    char address[20];
    int number;
    int age;
} stu;
int main(void)
{
    int i=1;
    FILE *fp;
    if(!(fp=fopen("slist","r")))
    {
        printf("cant open the file.\n");
        exit(EXIT_FAILURE);
    }
    rewind(fp);
    fseek(fp,i*sizeof(struct student),0);
    fread(&stu,sizeof(struct student), 1,fp);
    printf("name     age     number     address\n");

printf("%10s %4d %4d %10s\n",stu.name,stu.age,stu.number,stu.address);

   
    fclose(fp);
    return 0;
    
  


}
