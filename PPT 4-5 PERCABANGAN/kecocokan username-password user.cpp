#include<iostream>
#include<string>
using namespace std;

main()

{
    string username;
    int password;
    printf("Selamat datang di LINE Chat Mobile. Silakan login untuk melanjutkan!\n");
    cout<<"Masukkan Username kamu! : ";
    cin>>username;
    cout<<"Masukkan Password kamu! : ";
    cin>>password;

if(username== "grace123" && password== 987654321)
{
    cout<<"Username dan password kamu terverifikasi. Kamu berhasil masuk! \n"<<endl;
    cout<<"Halo, Grace! Terima kasih sudah menggunakan aplikasi LINE. \nMari buat momen bahagia dengan teman-teman melalui aplikasi LINE!"<<endl;
}
else
{
    cout<<"Username dan password kamu salah. Silakan ulangi dan coba lagi."<<endl;


}
}
