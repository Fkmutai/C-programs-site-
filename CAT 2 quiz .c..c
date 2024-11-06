// c program defining employee's details 
//cat2.q1.c
#include <stdio.h>
#include<string.h>
struct employee {
char name[25];
char email[15];
char department [20];
float salary ;
int id;
} employee ;
//cat2.q2.c
int main (){
  employee.salary=55000.50;
  strcpy(employee.email,"mutaimossi@gmail.com");
  strcpy(employee.department,"human resources");
  strcpy(employee.name,"John Doe");
strcpy(employee.id,"12345");
};
//cat2.q3.c
  {
printf ("%c", employee.name);
printf("%s", employee.email);
printf("%f", employee.salary);
printf("%s", employee.department);
printf ("%d", employee.id);
return 0 ;
}
  