#include<iostream>
using namespace std;

int main()
{
    //Memasukkan banyak data yang diinginkan

    int n;
    cout << "SELAMAT DATANG DI PROGRAM INPUT NILAI MAHASISWA." <<endl;
    cout << "================================================" <<endl;
    cout << "Silakan input jumlah mahasiswa:" <<endl;
    cin>> n;

    //Memasukkan data

    int nilai [n];
    char nama [n][100];

    cout << "==============================================="<<endl;
    cout<<"Masukkan Data Berupa Nama dan Nilai Mahasiswa!          \n" <<endl;
    for(int i=1; i<=n; i++)

    {
        cout << "Nama Mahasiswa ke-"<<i<<" : ";
        cin >> nama [i];
        cout << "Nilai Mahasiswa ke-"<<i<<" : ";
        cin >> nilai [i];

    }
    // Menampilkan isi data ke layar

       cout <<"=============================================="<<endl;
       cout <<"Berikut pemberitahuan kelulusan ujian mahasiswa:     \n"<<endl;
       for(int i=1; i<=n; i++)
        if (nilai[i] > 50){
                cout << i << " : ";
                cout <<"Halo, "<< nama [i]<<"!";
                cout <<" Nilai kamu adalah: "<<nilai[i]<<". Selamat, kamu LULUS ujian!" <<endl;
        }
        else if (nilai[i] <=50){
                cout << i << " : ";
                cout <<"Halo, "<< nama [i]<<"!";
                cout <<" Nilai kamu adalah: "<<nilai[i]<<". Mohon maaf, kamu TIDAK LULUS ujian." <<endl;
        }

}
