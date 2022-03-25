#include <iostream>
#include <string>
using namespace std;

int buyukOlan( int z, int y) {
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
 int bilinmeyen = 79;
 
int sayi;
 
 cout << "Bir sayı giriniz";
 cin >> sayi;

        
        
	 while(bilinmeyen != sayi){
		 if(bilinmeyen == sayi)
		    cout << "Bildiniz";
		else {
			
		    cout << "Bilemediniz. Baska bir sayı giriniz";
		    cin >> sayi;
	}
}

    cout << "\nwhile disari ciktim!"; 
     
cin >> x;
}

