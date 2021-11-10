#include <iostream>
using namespace std;

int main(){
	
	int x ;
	int y ;
	int z ;
	
	cout << "Masukkan angka 1,2,3\n";
	cin >> x >> y >> z;
	cout << endl;
	
	cout << "Hasil Operator AND :\n";
	if(x==1 && y==2 && z==3){
		cout << "BENAR";
	}else{
		cout << "SALAH";
	}
	
	cout << endl;
	cout << endl;
	
	cout << "Hasil Operator OR :\n";
	if(x==1 || y==2 || z==3){
		cout << "BENAR";
	}else{
		cout << "SALAH";
	}
	
}
