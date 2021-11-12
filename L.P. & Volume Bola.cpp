#include <iostream>
using namespace std;

int main (){
	float r;
	float phi = 3.14;
	
	cout << "\n------- BOLA -------\n\n";
	cout << "jari-jari (m) : ";
	cin  >> r; 
	
	cout << "\nLuas Permukaan  : " << 4*phi*r*r << " m^2";
	cout << "\NVolume\t\t: " << 4/3*phi*r*r*r << " m^3";
}
