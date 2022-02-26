 
*** even number ber korar program
#include <stdio.h>

int main()
{
    int n , sum = 0;
    printf("enter your number :");
    scanf("%d", &n); 
    for(int i = 0; i<= n; i++){  
        if(i % 2 == 0){  
            printf(" even number is %d\n ", i);
        }  
    }
    
}
