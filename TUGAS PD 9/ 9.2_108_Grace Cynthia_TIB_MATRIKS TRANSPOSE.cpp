#include <iostream>
using namespace std;
int main()
{
  //Memasukkan jumlah baris dan kolom matriks yang diinginkan
  int i, j, row, col, matriks[10][10], transpose[10][10];
    cout << "Masukkan jumlah baris matriks yang diinginkan: ";
    cin >> row;
    cout << "Masukkan jumlah kolom matriks yang diinginkan: ";
    cin >> col;

  //Memasukkan elemen matriks 3x3
    cout << "\n";
    cout << "Masukkan elemen matriks!\n";

    for (i = 0; i<row; i++){
        for (j = 0; j<col; j++){
        cin  >> matriks[i][j];
    }
  }
    for (i = 0; i<row; i++){
        for (j = 0; j<col; j++){
        transpose[i][j] = matriks[j][i];
    }
  }

  //Menampilkan matriks 3x3
    cout << "\n";
    cout << "Matriks yang terbentuk (Matriks Awal) adalah: \n";
    for (i = 0; i <row; i++){
        for (j = 0; j <col; j++){
        cout << matriks [i][j] << "\t";
    }
        cout << endl;
  }

  //Menampilkan hasil transpose matriks 3x3
    cout << "\n";
    cout << "Hasil Transpose Matriks: \n";
    for (i = 0; i <row; i++){
        for (j = 0; j <col; j++){
        cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }

  //Membuat program penjumlahan matriks dan transpose matriks
    cout << "\n";
    cout << "Hasil Penjumlahan dari Matriks Awal dengan Hasil Transpose Matriks adalah: "<<endl;
    for (i = 0; i <row; i++){
       for (j = 0; j <col; j++){
       cout << matriks[i][j] + transpose[i][j] << "\t";
       }
    cout << endl;
    }

}
