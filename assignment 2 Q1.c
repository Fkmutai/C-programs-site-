//c program showing qualification for a loan 
#include<stdio.h>
int main(){
int age;
float income ;
//get the user's income 
printf ("enter age:");
scanf("%d",&age);
printf("enter the annual income (in sh:)");
scanf("%f",& income);
//check whether legible for a loan 
{if (age>-21&&income>-21000);
printf ("congratulations you have been awarded a loan \n");
}
{else("sorry we are not able to :give you a loan ");
}
return 0;
}