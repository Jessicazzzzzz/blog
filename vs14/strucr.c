#include<stdio.h>
int main(void)
{  struct  date
{
    int year;
    int month;
    int day;
};

struct student
{
    int age;
    char name[20]; 
    struct  date birthday;
    char sex;
    float score;
}boy1,boy2;

     boy1.age=19;
     boy1.score=78;
     printf("please input the name of boy1:");
     scanf("%s",boy1.name);
     printf("%s\n",boy1.name);
     boy2 = boy1;
     printf("please enter boy1's the year ,the month and dayof birthday:");
     scanf("%d%d%d",&boy1.birthday.year,&boy1.birthday.month,&boy1.birthday.day);
     printf("the boy1's bitrhday is %d-%d-%d",
     boy1.birthday.day,boy1.birthday.month,boy1.birthday.year);
     printf("boy2's age,score,and name");
     printf("%d\n",boy2.age);
      printf("%f\n",boy2.score);
       printf("%s\n",boy2.name);
printf("the boy2's bitrhday is %d-%d-%d",
     boy2.birthday.day,boy2.birthday.month,boy2.birthday.year);

}
