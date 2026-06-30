#include <stdio.h>

void ReverseDisplay(char *str)
{
    char *start = NULL;

    start = str;       // start stores address of letter (100)

    while(*str != '\0')
    {
        str++;
    }
    // Issue that there is space in output due to '\0'
    
    while(start <= str)
    {
        printf("%c\n",*str);             // *str means single letter
        str--;
    }
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}