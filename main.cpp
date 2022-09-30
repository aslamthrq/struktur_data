#include <iostream>
#include <conio.h>

using namespace std;


struct paket
{
    string jenis_barang, kota;
    int berat;

};

struct paket kirim[100];

void tambahData(int x)
{
    int i=1;
    cout<<endl;
    cout<<"Data no."<< i <<endl;
    cout<<"Masukkan Jenis Barang : ";
    cin >> kirim[x].jenis_barang;
    cout<<"Masukkan Berat Barang : ";
    cin >> kirim[x].berat;
    cout<<"Masukkan Kota Tujuan : ";
    cin >> kirim[x].kota;
    i++;

}

void tampilData(int x)
{
    for(int i=1 ;i<x ;i++){
    cout<<endl;
    cout<<"=============== HASIL INPUT ==============="<<endl;
    cout<<"Data no."<< i <<endl;
    cout<<"Jenis Barang : "<< kirim[i].jenis_barang <<endl;
    cout<<"Berat Barang : " << kirim[i].berat<<endl;
    cout<<"Kota Tujuan : " << kirim[i].kota<<endl;
    cout<<"==========================================="<<endl;

    }
}

void hapusData(int x)
{
        cout<<endl;
        cout <<"!!!!!!!!!! DATA YANG DIHAPUS !!!!!!!!!!"<<endl;
        cout <<"Data no. " << x <<endl;
        cout <<"Jenis Barang\t: " <<kirim[x].jenis_barang<<endl;
        cout <<"Berat Barang\t: " << kirim[x].berat<<endl;
        cout <<"Kota Tujuan\t: " << kirim[x].kota<<endl<<endl;
}


int main()
{
    int pilih;

    int top = 1;
    int max;

    cout<<"Masukkan Maximal Data : ";
    cin >> max;
    do
    {
        cout<<endl;
        cout<<"----------- MENU UTAMA ----------- "<<endl;
        cout<< "1. Tambah Data"<<endl;
        cout<< "2. Hapus Data"<<endl;
        cout<< "3. Tampil Data"<<endl;
        cout<< "9. Keluar"<<endl;

        cout<< "Pilihan Anda [1-9] : ";
        cin >> pilih;
        if(pilih==1)
            {
                if(top <= max)
                {
                    tambahData(top);
                    top++;
                }
                else
                {
                    cout<<endl;
                    cout<<"MAAF DATA SUDAH FULL"<<endl;
                    cout<<"MAKSIMAL DATA ANDA : "<< max <<endl;
                    getch();
                }

            }
        if(pilih==2)
        {

                if(top != 0)
                {
                    top=top-1;
                    hapusData(top);
                }
                else
                {
                    cout<<"TIDAK ADA DATA!!"<<endl<<endl;
                }
        }

        if(pilih==3)
        {
            tampilData(top);
            top++;
        }

    }
    while (pilih != 9);

    return 0;
}
