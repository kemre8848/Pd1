#include <stdio.h>
#include <stdlib.h>

int main()
{ int derece;
    printf("derece giriniz\n");
    scanf("%d",&derece);
    if(derece<0){
        printf("donma noktasinin altinda");
    }
    else{
        printf("donma noktasinin ustunde");
    }
    return 0;
}
