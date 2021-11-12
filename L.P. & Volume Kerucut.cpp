#include <iostream>
using namespace std;

int main (){
	float r,t,s;
	float phi = 3.14;
	
	cout << "\n------- KERUCUT -------\n\n";
	cout << "jari-jari (m)   : ";
	cin  >> r; 
	cout << "tinggi (m)      : ";
	cin  >> t; 
	cout << "sisi miring (m) : ";
	cin  >> s;
	
	cout << "\nLuas Permukaan  : " << phi*r*(s+r) << " m^2";
	cout << "\nVolume\t\t: " << (phi*r*r*t)/3 << " m^3";
}
