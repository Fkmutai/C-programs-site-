//c program to calculate fine for library books overdue 
#include<stdio.h>
int main(){
int bookID,dueDate, returnDate;
int days overdue;
float finerate,fineamount;
//feed in book details 
printf( "enter book Id:");
scanf("%d",&bookID);
printf("enter due date:");
scanf("%d",&dueDate);
printf("enter returndate");
scanf("%d",&returndate);
//calculate the number of days overdue
days overdue=returndate - dueDate
//determine fine rates based on the number of days overdue 
if(days overdue>-7);fine rate=20;
else if(days overdue>-14);fine rate =50;
else(fine rate=100);
//calculate the total amount of fine
fine amount=days overdue * fine rate;
//results display 
printf("\n--library fine details--\n");
printf (" book Id :%d",book id );
printf("dueDate:%d",dueDate);
printf("return date:%d", returndate);
printf ("days overdue:%d",days overdue );
printf("fine rate:%2f",fine rate);
printf ("total fine amount:%2f",total fine amount);
return 0;
}