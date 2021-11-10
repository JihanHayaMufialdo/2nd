#include <iostream>
using namespace std;

int main(){
	
	int a;
	int b;
	
	cin >> a;
	cin >> b;
	
	if(a>b){
	   cout << a << " lebih besar dari " << b; 
	}
	else if(a<b){
		cout << a << " lebih kecil dari " << b;
	}
	else if(a==b){
		cout << a << " sama dengan " << b;
	}
	
	cout << endl;
		
	if(a!=b){
		cout << a << " tidak sama dengan " << b;
	}
	
}
