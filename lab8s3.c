
#include <stdio.h>
#include <stdlib.h>

int main()
{   int sayi;
    printf("sayi giriniz\n");
    scanf("%d",&sayi);
    if(sayi%2==0){
        printf("sayi cift");
    }
    else{
        printf("sayi tek");
    }
    return 0;
}
