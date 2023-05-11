#include <iostream>
using namespace std;
int main()
{
 double panjang,lebar;
  //input
 cout<<"PROGRAM KELILING ALFANDI X6"<<endl;
 cout<<"Masukan panjang Nya : ";cin>>panjang;
 cout<<"Masukan lebar Nya : ";cin>>lebar;
  //proses
 double keliling;
 keliling=2*(panjang+lebar);
  //output
 cout<<"\nKeliling Persegi Panjang = : "<<keliling<<endl;
 return 0;
}