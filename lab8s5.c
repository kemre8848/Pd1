#include <stdio.h>
#include <stdlib.h>

int main()
{   int derece;
    printf("derece giriniz");
    scanf("%d",&derece);
    derece=(derece-32)/1.8;
    printf("%d",derece);

    return 0;
}
