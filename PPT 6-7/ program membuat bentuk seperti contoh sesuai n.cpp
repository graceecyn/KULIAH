#include<iostream>
using namespace std;

main()
{
    int x,bas,kom; //variabel dideklarasikan sebagai bilangan integer
    cout<<"Masukkan nilai n : ";
    cin>>x;

    cout<<"\n";
    for(bas=0;bas<=x;bas++)
{
    for(kom=1;kom<=x-bas;kom++)
{
    //cetak hasilnya
    cout<<x-bas;
}
    cout<<endl;
}

}
