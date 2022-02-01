#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[10];
    int age;
   char id[20];
};
struct course
{
   char name[10];
   char subno[30];

};
int main()
{
     FILE *fp;

     struct student s;

     fp=fopen("student.txt","r");

     if(fp==NULL )
     {
        fprintf(stderr, "\nError opening student.txt\n\n");
        exit(1);
     }
    fread(&s,sizeof(struct student),1,fp);
   printf("%s\n%d\n%d\n",s.name,s.age,s.id);
fclose(fp);



FILE  *fp1;
struct course c;
fp1=fopen("course.txt","r");
if(fp1==NULL)
{

    fprintf(stderr,"\nError opening student.txt\n\n");
    exit(1);
}
 fread(&c,sizeof(struct course),1,fp1);

        printf("%s\n%s\n",c.name,c.subno);

fclose(fp1);

}

