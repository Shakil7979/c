
******* namota
#include <stdio.h>

int main()
{

    int n, gun;
    printf("enter your number : ");
    scanf("%d", &n);
    for(int i = 0; i <= 10; i++){ 
        gun = i * n;
        printf("%d * %d = %d\n" , n, i, gun);
    }
    
}
