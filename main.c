#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("====== FACTORIAl NUMBERS ======\n\n");

    int fat = 0;
    int resposta = 1;


    printf("Type a number: \n");
    scanf("%d", &fat);

    if(fat == 0)
    {
        printf("0 is not valid!");
    } else
    {


    for( ; fat >= 1; --fat)
    {
        resposta = resposta * fat;

        if (fat == 1)
        {
            printf("%d", fat);
        } else
        {
            printf("%d x ", fat);
        }

    }
    printf(" = %d \n", resposta);
    return 0;

}
}
