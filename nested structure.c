#include<stdio.h>
  struct employeedetails
  {
      char name[30];
      int id;

      struct
      {
          int block;

          struct
          {
             int division;
            // struct employeedetails add;
          } departmentdivision;
      }departmentdetails;
  };
  int main()
  {

  struct employeedetails emp;

  printf("enter details:\n");
  printf("enter name of employee:");
  scanf("%s",emp.name);
  printf("enter employee id:");
  scanf("%d",&emp.id);
  //printf("enter department name:");
  //sc//anf("%s",emp.departmentdetails.name);
  printf("enter block:");
  scanf("%d",&emp.departmentdetails.block);
  printf("enter division :");
  scanf("%d",&emp.departmentdetails.departmentdivision.division);

  printf("\n");

//printf("employee details:\n");
printf("employee name:%s\n",emp.name);
printf("employee id:%d\n",emp.id);
//printf("department name:%s",emp.departmentdetails.name);
printf("department block:%d\n",emp.departmentdetails.block);
printf("departmentdivision :%d\n",emp.departmentdetails.departmentdivision.division);
  }
