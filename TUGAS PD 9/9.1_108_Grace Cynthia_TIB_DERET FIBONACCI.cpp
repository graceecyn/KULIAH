#include <iostream>
using namespace std;

int main()
{
    int fibo[10];
    cout<<"SELAMAT DATANG DI PROGRAM MEMBUAT DERET FIBONACCI"<<endl;
    cout<<"==================================================="<<endl;

    //Pembuatan deret fibonacci
    for (int i=0; i<10; i++){
        if (i<2)
            fibo[i]=i;

        else
            fibo[i]=fibo[i-2]+fibo[i-1];
    }

    //Menampilkan deret fibonacci ke layar
    cout<<"Deret Fibonacci yang dihasilkan adalah: "<<endl;

        for(int i=0;i<10;i++){
            cout<<fibo[i]<<" ";
    }
    cout<<"\n"<<" ";
}
