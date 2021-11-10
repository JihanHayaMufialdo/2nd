#include <iostream>
using namespace std;

int main(){
	
	int a = 62;
	int b = 15;
	int c = -25;
	int jumlah,kurang,kali,bagi,mod;
	
	//penjumlahan
	jumlah = b+c;
	
	//pengurangan
	kurang = b-c;
	
	//perkalian
	kali = a*b;
	
	//pembagian
	bagi = a/b;
	
	//sisa bagi
	mod = a%b;
	
	cout << b << " + " << c << " = " << jumlah << endl;
	cout << b << " - " << c << " = " << kurang << endl;
	cout << a << " * " << b << " = " << kali   << endl;
	cout << a << " / " << b << " = " << bagi   << endl;
	cout << a << " % " << b << " = " << mod    << endl;
	
	return 0;
}
