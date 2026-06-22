#include<stdio.h>            // Sequence

int main()
{  
   int iNo = 751;
   int iDigit = 0;

   iDigit = iNo % 10;
   printf("%d\n", iDigit);
   iNo = iNo/10;

   iDigit = iNo % 10;
   printf("%d\n", iDigit);
   iNo = iNo/10;
   
   iDigit = iNo % 10;
   printf("%d\n", iDigit);
   iNo = iNo/10;


    return 0;
}