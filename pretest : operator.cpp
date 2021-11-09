#include <iostream>
#include <conio.h>
using namespace std;
int main (){

system ("COLOR 3");
double x;

//kreasi
cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ TRANSAKSI KONVERSI MATA UANG RUPIAH KE BITCOIN +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
cout <<                                                                                                                     endl;

//TIPEDATA
int    tanggaltransaksi                                                                                                         ;
string bulantransaksi                                                                                                           ;
int    tahuntransaksi                                                                                                           ;
float  jumlahuang                                                                                                               ;
float  hargabitcoin                                                                                                             ;

//kreasi
cout << "Harap Masukkan Tanggal, Bulan, Tahun Transaksi Anda, serta Jumlah Uang Anda dalam Rupiah, dan Harga 1 Bitcoin"  << endl;
cout << "--------------------------------------------"                                                                   << endl;
cout << "INSTRUKSI : MASUKKAN DALAM 5 BARIS BERURUTAN"                                                                   << endl;
cout <<                                                                                                                     endl;

//INPUT
cin  >> tanggaltransaksi                                                                                                        ; 
cin  >> bulantransaksi                                                                                                          ;
cin  >> tahuntransaksi                                                                                                          ;
cin  >> jumlahuang                                                                                                              ;
cin  >> hargabitcoin                                                                                                            ;

//kreasi
cout <<                                                                                                                     endl;
cout << "+++++++++ TANGGAL TRANSAKSI DAN JUMLAH BITCOIN ANDA +++++++++"                                                  << endl;
cout <<                                                                                                                     endl;

//OUTPUT
cout << "Tanggal Transaksi   :   " << tanggaltransaksi << " " << bulantransaksi << " " << tahuntransaksi                 << endl;
cout << "Jumlah Bitcoin      :   " << jumlahuang/hargabitcoin << " Bitcoin"                                              << endl;

//kreasi
cout <<                                                                                                                     endl;
cout << "+++++++++++++++++++++++ TERIMA KASIH ++++++++++++++++++++++++"                                                  << endl;

getch();
return 0;
}

