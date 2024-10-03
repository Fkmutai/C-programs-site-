//how to calculate simpleInterest  using c complier
#include <stdio.h>

int main() {
     float principalAmount;
     float rate ;
     float time ;   
     
     printf ("enter principalAmount");
     scanf ("%f",&principalAmount);
     printf ("enter rate");
     scanf ("%f",&rate);
     printf ("enter time");
     scanf ("%f|",&time);
     
 int si;
     si=(principalAmount*time*rate)/100;
     printf ("%d",si);
     return  0;
 }      