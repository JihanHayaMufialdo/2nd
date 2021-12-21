#include <iostream>
using namespace std;

int main(){
	
	float r,t;
	float phi = 3.14;

	cout << "r = ";
	cin  >> r; 
	cout << "t = ";
	cin  >> t;
	
	cout << "\nLuas Permukaan  : " << phi*r*r*t << " m^2";
	cout << "\nVolume\t\t: " << 2*phi*r*(r+t) << " m^3";
	
}
