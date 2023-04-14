#include <stdio.h>

int main()
{
    int n1,n2,inter;
    printf("Ingrese numero 1:",n1);
    scanf("%d",&n1);
    printf("Ingrese numero 2:",n2);
    scanf("%d",&n2);
    printf("Intercambiando valores\n");
    inter=n1;
    n1=n2;
    n2=inter;
    printf("Ahora el valor de n1 es: %d\n",n1);
    printf("Ahora el valor de n2 es: %d\n",n2);
    return 0;
}
