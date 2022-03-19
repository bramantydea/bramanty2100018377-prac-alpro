#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int pil;
	float bil1,bil2,hasil;
	string operasi;
	
	cout<<"KALKULATOR SEDERHANA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<endl;
	
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2;	
	
	switch(pil){
	    case 1 : hasil=bil1+bil2;
			operasi='+';
			break;
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<endl;
	cout<<"HASIL : "<<bil1<<" "<<operasi<<" "<<bil2<<" "<<"="<<" "<<hasil<<endl;
	cout<<endl;
	cout<<"Terima Kasih Telah Menggunkan Kalkulator Sederhana ";
	
	getch();
}
