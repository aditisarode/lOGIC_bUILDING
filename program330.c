#include <stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);
    
    iMask = 0x00000008;               // 4th bit

    iNo = iNo ^ iMask;

    printf("Updated number : %d\n",iNo);

    return 0;
}
