#include <iostream>
using namespace std;

int main() {
	int x, birinci, ikinci, islem;
	
	cout << "Birinci sayýsý giriniz:";
	cin >> birinci;
	cout << "ikinci sayýsý giriniz:";
	cin >> ikinci;
	
     cout << "0. Toplama\n1. Çýkarma\n2. Bolme\n3. Çarpma\nBirini seciniz";
     cin >> islem;
     
     switch ( islem ) {
     	
case 0 :
 cout << birinci << " + " << ikinci << " = " << birinci + ikinci << endl;	
break;	
     	
   	
case 1 :
 cout << birinci << " - " << ikinci << " = " << birinci - ikinci << endl; 	
break;    
 	
     	
case 2 :
  if(ikinci == 0 )
	      cout << "Sýfýra bölünmez!";
 cout << birinci << " / " << ikinci << " = " << birinci / ikinci << endl; 	
break;


case 3 :
 cout << birinci << " * " << ikinci << " = " << birinci * ikinci << endl;   	
break;
  	
default:
cout << "Yanlýþ girdi";  	
	 }
	 

	
	cin >> x;
}
