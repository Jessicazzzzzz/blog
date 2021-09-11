#include <stdio.h>

#define SIZE 2
struct student
{
    char name[20];
    char address[20];
    int number;
    int age;
} stu[SIZE];
void save()
{
    FILE *fp;
    int i;
    if (!(fp = fopen("slist", "wb+")))
    {
        printf("can not open the file");
        return;
    }
    for (i = 0; i < SIZE; i++)
    {  if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
             {printf("write error.\n");
            
    
             fclose(fp);}

    }
}
void load()
{
    FILE *fp;
    int i;
    if(!(fp=fopen("slist","r")))
    {
        printf("can not open the file");
        return;
    }
   
    for(i=0;i<SIZE;i++)
    {
        fread(&stu[i],sizeof(struct student),1,fp);
    }
    fclose(fp);
}
int main(void)
{ int i;
printf("please enter student name,age ,numberand address:");
for(i=0;i<SIZE;i++)
scanf("%s %d %d %s",stu[i].name,&stu[i].age,&stu[i].number,stu[i].address);
save();
load();
printf("name     age     number     address\n");
for(i=0;i<SIZE;i++)
{
printf("%10s %4d %4d %10s\n",stu[i].name,stu[i].age,stu[i].number,stu[i].address);
}
}