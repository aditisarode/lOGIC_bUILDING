//objective-> 

#include<stdio.h>

void Display(int iCnt,int n)
{
    //filter
    if(iCnt<0)
    {
        printf("Invalid input\n");
        return;
    }
    for(iCnt=n;iCnt>=1;iCnt--)
    {
        printf("%d:Jay Ganesh..\n",iCnt);
    }
}
int main()
{
    int iCnt=0;
    int n;

    printf("Enter number of times u want to print on the screen :\n");
    scanf("%d",&n);

    Display(iCnt,n);
}