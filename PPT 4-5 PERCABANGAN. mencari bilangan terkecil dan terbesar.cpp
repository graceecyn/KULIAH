#include<stdio.h>

main()
{
    int a,b ;
    printf("Masukkan bilangan 1 : ");
    scanf("%d", &a);
    printf("Masukkan bilangan 2 : ");
    scanf("%d", &b);

    if(a<b)
    printf("Bilangan terbesar yaitu: %d\n\nBilangan terkecil yaitu:  %d", b, a);
    if(a==b)
    printf("Tidak ada bilangan yang lebih besar maupun lebih kecil", a, b);
    if(a>b)
    printf("Bilangan terbesar yaitu: %d\n\nBilangan terkecil yaitu:  %d", a, b);
}
