#include <iostream>
using namespace std;

int main (){
	float r,t;
	float phi = 3.14;

	cout << "\n------- TABUNG -------\n\n";
	cout << "jari-jari (m) : ";
	cin  >> r; 
	cout << "tinggi (m)    : ";
	cin  >> t;
	
	cout << "\nLuas Permukaan  : " << phi*r*r*t << " m^2";
	cout << "\nVolume\t\t: " << 2*phi*r*(r+t) << " m^3";
}
