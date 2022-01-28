#include<stdio.h>

  struct student
  {
       char name[20];
       int id;
  };
  struct staff
  {
     int strength;
     int experience;
  };
  struct nonstaff
  {
      int age;
      char name[20];
  };
  struct admin
  {
     struct student std;
     struct staff sta;
     struct nonstaff non;
  };
void main()
{
  struct admin a;
//for(int i=0;i<2;i++)



  printf("enter name:");
  scanf("%s",&a.std.name);
  printf("enter  id:");
  scanf("%d",&a.std.id);
  printf("enter strength:");
  scanf("%d",&a.sta.strength);
  printf("enter experience:");
  scanf("%d",&a.sta.experience);
  printf("enter age:");
  scanf("%d",&a.non.age);
   printf("enter name:");
  scanf("%s",&a.non.name);

  printf("\n");
  printf("student details:\n");
  printf("student name:%s\n",a.std.name);
   printf("student id:%d\n",a.std.id);
printf("strength:%d\n",a.sta.strength);
   printf("experience:%d\n",a.sta.experience);
   printf("age:%d\n",a.non.age);
     printf("name:%d\n",a.non.name);
}
