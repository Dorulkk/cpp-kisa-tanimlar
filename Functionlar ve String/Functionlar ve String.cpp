#include <iostream>
#include <string>
using namespace std;



int buyuOlan( int z, int y) {
	
if( z > y)
	return z;
else
	return y;
	
}

string isimSoyisim( string isim, string soyisim){
	return isim + soyisim;
	
}

int main() {
	int x;
	int A,B;
	
    cout << "L�tfen Bir say� giriniz: ";
    cin >> A;
    cout << "Ba�ka bir say� giriniz: ";
    cin >> B;
    
    int buyuk;
    buyuk = buyuOlan( A, B);
    
    string c,d;
    
    cout << buyuk << " buyuk olan deger.";
	
	
	cout << "Ad�: ";
	cin >> c;
	cout << "Soyad�: ";
	cin >> d;
	
	string toplam = isimSoyisim( c,d);
	
	cout << "Toplam = " << toplam;
	
	cin >> x;
}

