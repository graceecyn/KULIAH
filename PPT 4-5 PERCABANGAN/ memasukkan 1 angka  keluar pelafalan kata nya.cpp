#include <stdio.h>

main()
{
    int angka;
    printf("Silakan Masukkan Angka dari 0-9 : ");
    scanf("%i", &angka);

    if (angka==0)
    {
        printf ("NOL");
    }
    else if(angka==1)
    {
        printf ("SATU");
    }
    else if(angka==2)
    {
        printf ("DUA");
    }
    else if(angka==3)
    {
        printf ("TIGA");
    }
     else if(angka==4)
    {
        printf ("EMPAT");
    }
     else if(angka==5)
    {
        printf ("LIMA");
    }
     else if(angka==6)
    {
        printf ("ENAM");
    }
     else if(angka==7)
    {
        printf ("TUJUH");
    }
     else if(angka==8)
    {
        printf ("DELAPAN");
    }
     else if(angka==9)
    {
        printf ("SEMBILAN");
    }
    else
    {
        printf("Angka yang Anda input kurang dari 0 atau lebih dari 9 atau merupakan karakter yang tidak terdefinisi.");
    }
}
