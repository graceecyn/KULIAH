#include <iostream>

using namespace std;

main()
{
    int counter,z,zmaks=0;
    cout<<"Selamat datang di program mencari bilangan terbesar.\nSilakan input 10 bilangan secara acak!\n"<<endl;
    for (counter=0;counter<10;++counter) //perintah yang sama akan muncul sampai counter jadi 9
{
    cout<<"input bilangan: ";
    cin>>z;

    if (z>zmaks)
    {
        zmaks=z;
    }//perintah ini berguna untuk terus mengupdate nilai zmaks
}

    cout<<"\nMaka, bilangan terbesarnya adalah: "<<zmaks;
}
