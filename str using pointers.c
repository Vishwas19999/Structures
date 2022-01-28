#include<stdio.h>

#include<string.h>

struct student

{

    char name[20];

};

struct staff

{

    char name[20];

};

struct non_staff

{

    char name[20];

};

struct admin

{

    struct student stu[2];

    struct staff sta[2];

    struct non_staff non[2];

};

void main()

{

    struct admin ad;

    struct admin b[2];

    struct admin *ptr=NULL;

    ptr=b;

    printf("details using structures\n");

    for(int i=0;i<2;i++)

    {

     printf("enter the student name\n");

     scanf("%s",&ad.stu[i].name);

     printf("enter the staff name\n");

     scanf("%s",&ad.sta[i].name);

     printf("enter the non-staff name\n");

     scanf("%s",&ad.non[i].name);

    }



    printf("details using pointers are:\n");

    for(int i=0;i<2;i++)

    {

        printf("enter student name\n");

        scanf("%s",ptr->stu[i].name);

        printf("enter staff name\n");

        scanf("%s",ptr->sta[i].name);

        printf("enter non-staff name \n");

        scanf("%s",ptr->non[i].name);

        ptr++;

    }



    printf("results are:\n");

    for(int i=0;i<2;i++)

    {

        printf(" student name:%s \n", ptr->stu[i].name);

        printf(" staff name:%s \n", ptr->sta[i].name);

        printf(" non staff name:%s \n", ptr->non[i].name);

    }
    }
