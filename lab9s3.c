#include <stdio.h>
#include <stdlib.h>

int main()
{ int sayi,tersi=0,sayi1,n;
    printf("sayi gir\n");
    scanf("%d",&n);
    sayi1=n;
    while(n!=0){
        tersi=sayi%10;
        sayi1=tersi*10+tersi;
        n/=10;
    }
    if(sayi1==tersi){
        printf("polindrom");
    }
    else{
            printf("polindrom degil");
    }

    return 0;
}
