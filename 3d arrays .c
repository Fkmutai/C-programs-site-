// mutai Felix
//c arrays 3Darrays 
#include <stdio.h>
int main(){
int i;
int j;
int k;
int marks[2][2][3]={ { {40,50,60},{80,30,92},{40,50,60},{80,30,92} } };
for (i=0;i<2;i++){
for (j=0;j<2; j++){
for(k=0;k<3;k++){
printf ("marks[%d][%d][d] = %d  \n" ,i,j,k, marks[i][j][k]);
}
}
}
return 0;
}