#include <iostream>
using namespace std;

int main() {
	int x, y, pil;
	float hasil;

	cout<<"Pilih Operator yang Digunakan"<<endl;
	cout<<"1. Penjumlahan (+)"<<endl;
	cout<<"2. Pengurangan (-) "<<endl;
	cout<<"3. Perkalian (x) "<<endl;
	cout<<"4. Pembagian (:) "<<endl;
	cout<<"5. Sisa Bagi (%) "<<endl;
	cout<<"Pilih : ";
	cin>>pil;

	switch(pil) {
		case 1 :
			cout<<"Angka Pertama : ";
			cin>>x;
			cout<<"Angka Kedua : ";
			cin>>y;
			hasil = x + y;
			cout<<x<<" + "<<y<<" = "<<hasil<<endl;
			break;
		case 2 :
			cout<<"Angka Pertama : ";
			cin>>x;
			cout<<"Angka Kedua : ";
			cin>>y;
			hasil = x - y;
			cout<<x<<" - "<<y<<" = "<<hasil<<endl;
			break;
		case 3 :
			cout<<"Angka Pertama : ";
			cin>>x;
			cout<<"Angka Kedua : ";
			cin>>y;
			hasil = x * y;
			cout<<x<<" x "<<y<<" = "<<hasil<<endl;
			break;
		case 4 :
			cout<<"Angka Pertama : ";
			cin>>x;
			cout<<"Angka Kedua : ";
			cin>>y;
			hasil = x / y;
			cout<<x<<" : "<<y<<" = "<<hasil<<endl;
			break;
		case 5 :
			cout<<"Angka Pertama : ";
			cin>>x;
			cout<<"Angka Kedua : ";
			cin>>y;
			hasil = x % y;
			cout<<x<<" % "<<y<<" = "<<hasil<<endl;
			break;
		default :
			cout<<"Pilihan tidak tersedia"<<endl;
	}
	return 0;
}
