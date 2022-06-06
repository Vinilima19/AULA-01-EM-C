#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f,t;

    printf("quanto esta em graus fahrenheit?");
    scanf("%d",&f);

    t=(f-32)*5/9;
    printf("o valor da conversao e:%2.2d\n",t);




    return 0;
}
