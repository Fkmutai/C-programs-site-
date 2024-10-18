//mutai Felix
//program of electrical bill
#include<stdio.h>
#include<math.h>
float charge (float u);
float amount (float b, float s);
float bill(float b,float s);

   int main (void){
   int id;float b,c,s,a,u; char n[]={};
   
    printf("Enter name\n",n);
    scanf("%s",&n);
    printf("Enter ID\n",id);
    scanf("%d",&id);
    printf("unit consumed is:\n",u);
    scanf("%f",&u);
 
 
 c=charge(u);
 b=u*c;
 s=b*0.15;
 a=bill(b,s);
 
 printf("charge is %f\n",c);
 printf("bill is %f\n",b);
 printf("surcharge is %f\n",s);
 
 printf("amount is %f",a);
 return 0;}
 
 float charge(float u){
  float charge;
   if(u<200){charge=1.20;}
     else if(u<400){charge=1.50;}
     else if(u<600){charge=1.80;}
   else charge=2.0;
   return charge;}
   
   float bill(float b,float s){
    float a,c,u;
     if(b<100){a=100;}
     else if(b<400){a=b;}
     else
     a=b+s;
     return a;
   }