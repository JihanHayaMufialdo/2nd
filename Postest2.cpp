#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	
	system ("COLOR 5");
	double x;
	
	//TIPEDATA//
	float a,b,c;   
	
	/* ket : a = jumlah bitcoin dibeli
             b = harga pembelian
	         c = harga saat ini        
	*/

        //kreasi	
	cout << "  PROGRAM UNTUK MENENTUKAN BESARAN KENAIKAN SERTA PENURUNAN HARGA BITCOIN DARI WAKTU PEMBELIAN"   << endl;
	cout << "================================================================================================" << endl;
	cout << ""                                                                                                 << endl;
	cout << "masukkan jumlah bitcoin dibeli, harga pembelian, harga saat ini dalam 3 baris berturut :"           << endl;
	cout << "________________________________________________________________________________________"           << endl;
	cout << ""                                                                                                 << endl;
	
	//INPUT//
	cin  >>  a;
	cin  >>  b;
	cin  >>  c;
	
	//kreasi
	cout << ""                                                                                                << endl;
	cout << "===============================================================================================" << endl;
	cout << "   BESARAN KENAIKAN ATAU PENURUNAN HARGA BITCOIN SERTA KEUNTUNGAN ATAU KERUGIAN YANG DIDAPAT   " << endl;
	cout << "===============================================================================================" << endl;
	cout << ""                                                                                                << endl;
	
	//OUTPUT//
	cout << "Kenaikan/Penurunan    :   " << ((c-b)/b)*100     << "%"                                          << endl; 
	     //dikali 100 agar mendapat persentasi nilai
	cout << "Keuntungan/Kerugian   :   " << ((c-b)*a)/1000000 << " "  << "juta"                               << endl; 
	     //dibagi 1000000 karena nilai sudah ditambahkan satuan yakni juta
	
	//kreasi     
	cout << ""                                                                                                << endl;
	cout << "===============================================================================================" << endl;
	cout << "                                    TERIMA KASIH                                               " << endl;
	cout << "===============================================================================================" << endl;
	
	getch();
	return 0;
}
