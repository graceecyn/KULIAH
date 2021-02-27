#include <stdio.h>

main()

{
    int nt,np,nuts,nuas,bt,bp,buts,buas;
    float NA;
    printf("Selamat datang di\nPROGRAM MENGHITUNG GRADE NILAI MAHASISWA.\nSILAKAN MASUKKAN REKAP NILAI KAMU DI SEMESTER INI!\n\n");

    printf("Berapa nilai tugasmu? : ");
    scanf ("%i", &nt);
    printf("Bobot nilai tugas adalah 30 persen.\n\n");

    printf("Berapa nilai partisipasimu di kelas? : ");
    scanf ("%i", &np);
    printf("Bobot nilai partisipasi adalah 40 persen.\n\n");

    printf("Berapa nilai UTS mu? : ");
    scanf ("%i", &nuts);
    printf("Bobot nilai UTS adalah 20 persen.\n\n");

    printf("Berapa nilai UAS mu? : ");
    scanf ("%i", &nuas);
    printf("Bobot nilai UAS adalah 10 persen.\n\n");


    bt<=0.3;
    bp<=0.4;
    buts<=0.2;
    buas<=0.1;

    NA=(nt*0.3 + np*0.4 + nuts*0.2 + nuas*0.1);
    {
        printf("Nilai Akhir kamu adalah: %.2f\n", NA);
    }
    if(NA>=0 && NA<=40)
    {
        printf("Grade kamu : E");
    }
    else if(NA>=40 && NA<=50)
    {
        printf("Grade kamu : D");
    }
    else if(NA>=50 && NA<=54)
    {
        printf("Grade kamu : C-");
    }
    else if(NA>=55 && NA<=59)
    {
        printf("Grade kamu : C");
    }
    else if(NA>=60 && NA<=64)
    {
        printf("Grade kamu : C+");
    }
    else if(NA>=65 && NA<=69)
    {
        printf("Grade kamu : B-");
    }
    else if(NA>=70 && NA<=74)
    {
        printf("Grade kamu : B");
    }
    else if(NA>=75 && NA<=79)
    {
        printf("Grade kamu : B+");
    }
    else if(NA>=80 && NA<=84)
    {
        printf("Grade kamu : A-");
    }
    else if(NA>=85 && NA<=100)
    {
        printf("Grade kamu : A");
    }
    else
    {
        printf("Bilangan yang kamu masukkan kurang dari 0 atau lebih dari 100 atau tidak terdefinisi. Silakan ulangi input nilai!");
    }

}
