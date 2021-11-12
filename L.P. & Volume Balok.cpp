#include <iostream>
using namespace std;

int main (){
	
	float p,l,t;
	
	cout << "\n------- BALOK -------\n\n";
	cout << "panjang (m) : ";
	cin  >> p; 
	cout << "lebar (m)   : ";
	cin  >> l;
	cout << "tinggi (m)  : ";
	cin  >> t;
	
	cout << "\nLuas Permukaan  : " << 2*(p*l + p*t + l*t)<< " m^2\n";
	cout << "Volume\t\t: " << p*l*t << " m^3";
}
