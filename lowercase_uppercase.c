// Uppercase Lowercase ber korar program

#include <stdio.h>
int main()
{

    char ch;
    printf("Enter a Char : ");
    scanf("%c", &ch);  
    if((ch >= 'A') && (ch <= 'Z')){
        printf("'%c' is Uppercase.", ch);
    } else if ((ch >= 'a') && (ch <= 'z')){
        printf("'%c' is Lowercase.", ch);
    }else{
         printf("'%c' is not alphabet.", ch);
    }
}
