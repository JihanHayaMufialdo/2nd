//#include <iostream>
//using namespace std;
//
//int main (){
//	float r,t;
//	float phi = 3.14;
//	
//	cout << "\n------- TABUNG -------\n\n";
//	cout << "jari-jari (m) : ";
//	cin  >> r; 
//	cout << "tinggi (m)    : ";
//	cin  >> t;
//	
//	cout << "\nLuas Permukaan  : " << phi*r*r*t << " m^2\n";
//	cout << "Volume\t\t: " << 2*phi*r*(r+t) << " m^3";
//}
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
	
	cout << "\nLuas Permukaan  : " << phi*r*(s+r) << " m^2\n";
	cout << "Volume\t\t: " << 1/3*phi*r*r*t << " m^3";
}
