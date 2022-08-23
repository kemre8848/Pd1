#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d \n %d \n %d",&a,&b,&c);
    if(a>b && a>c){
        printf("a en buyuk");
    }
    else if(b>a && b>c){
        printf("b en buyuk");
    }
    else{
        printf("c en buyuk");
    }
    return 0;
}
