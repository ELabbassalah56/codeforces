#include <stdio.h>

int main(void) {
   long long int X_NUM,Y_NUM,A_NUM;
scanf("%lld %lld %lld",&X_NUM,&Y_NUM,&A_NUM);
  

    if (A_NUM > X_NUM && A_NUM > Y_NUM)
      printf("1");
    else {
     if (X_NUM%A_NUM > 0)
      X_NUM=X_NUM/A_NUM +1;
     else 
     X_NUM =X_NUM/A_NUM;

     if (Y_NUM%A_NUM > 0) 
     Y_NUM=Y_NUM/A_NUM +1;
     else
      Y_NUM =Y_NUM/A_NUM;

  printf("%lld",X_NUM*Y_NUM);}
  
  return 0;
}