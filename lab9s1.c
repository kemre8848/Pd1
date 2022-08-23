#include <stdio.h>
#include <stdlib.h>

int main()
{ int sayac=1,faktoriyel=1,a;
    printf("sayi gir\n");
    scanf("%d",&a);
    while(sayac<=a){
        faktoriyel=faktoriyel*sayac;
        sayac++;
    }
    printf("%d",faktoriyel);
    return 0;
}
