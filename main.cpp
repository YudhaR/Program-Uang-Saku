#include <iostream>

/*
    Program Uang saku
    Ket : Program menentukan uang saku mahasiswa mampu atau tidak mampu
    By  : Yudha Rizqia Grafer
    Tgl : 14 Oktober 2022

*/

using namespace std;

int main()
{
    //Kamus
    char c;
    int u;

    //Algoritma
    cout << "Apaka anda mahasiswa? (y/t)";
    cin >> c;
    if ( c == 'y' )
    {
        cout << "Masukkan uang saku per-bulan : ";
        cin >> u;
        if ( u > 1000000)
        {
            cout << "Mahasiswa mampu" << endl;
        }
        else
        {
            cout << "Mahasiswa kurang mampu" << endl;
        }
    }
    else
    {
        cout << "Bukan mahasiswa" << endl;
    }
    return 0;
}
