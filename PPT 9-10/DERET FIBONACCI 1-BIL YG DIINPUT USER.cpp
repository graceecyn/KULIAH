#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"SELAMAT DATANG DI PEMBUATAN DERET FIBONACCI"<<endl;
    cout<<"==================================================="<<endl;

    //Input angka yang menjadi batas deret fibonacci
    cout<< "Silakan masukkan batas angka untuk deret fibonacci\nyang akan dibuat: ";
    cin>>n;

    //Pembuatan deret fibonacci
    int fibo[n];
    for (int i=0; i<n; i++){
        if (i<2)
            fibo[i]=i;

        else
            fibo[i]=fibo[i-2]+fibo[i-1];
    }

    //Menampilkan deret fibonacci sesuai batas angka yang ditentukan
    cout<<"==================================================="<<endl;
    cout<<"Maka, deret fibonacci yang dihasilkan adalah: "<<endl;

        for(int i=1;i<=n;i++){
            if ((fibo[i]>0)&&(fibo[i]<=n))
            cout<<fibo[i]<<" ";
    }
    cout<<"\n"<<" ";
}
