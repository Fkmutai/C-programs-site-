// c program to prompt the user to enter details of the book
#include <stdio.h> //printf(), scanf();
#include<string.h>//strcpy ();
struct book{
    char name [30];
    int publication_year;
    char ISBN [13];
    float price ;
    }book ;
int main (){
// enter author's name 
//strcpy (book. name,"introduction to c programming");
  printf ("enter book name:");
  scanf("%s", book.name);
  book.price=49.99;
  strcpy(book. ISBN,"9780131103627");
  strcpy(book.name,"introduction to c programming");
 book.publication_year=2022 ;
  printf ("introduction to c programming.name");
  return 0;
   }