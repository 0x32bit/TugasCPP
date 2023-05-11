#include <iostream>
using namespace std;
int main() {
	
	cout<<"PROGRAM BILANGAN TERKECIL ALFANDI X6"<<endl;
	int terkecil, bil1, bil2;
	cout<<"\nMasukan Bilangan ke-1 : ";
	cin>>bil1;
	cout<<"Masukan Bilangan ke-2 : ";
	cin>>bil2;
	
	//Menentukan nilai terkecil
	terkecil=bil1;
	
	if (bil2 < terkecil){
		terkecil=bil2;
	}
	
	
	cout<<"\nNilai Terkecil adalah "<<terkecil<<endl;

	return 0;	
}
