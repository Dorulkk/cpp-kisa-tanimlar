#include <iostream>
using namespace std;

int main() {
	int x, birinci, ikinci, islem;
	
	cout << "Birinci say�s� giriniz:";
	cin >> birinci;
	cout << "ikinci say�s� giriniz:";
	cin >> ikinci;
	
     cout << "0. Toplama\n1. ��karma\n2. Bolme\n3. �arpma\nBirini seciniz";
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
	      cout << "S�f�ra b�l�nmez!";
 cout << birinci << " / " << ikinci << " = " << birinci / ikinci << endl; 	
break;


case 3 :
 cout << birinci << " * " << ikinci << " = " << birinci * ikinci << endl;   	
break;
  	
default:
cout << "Yanl�� girdi";  	
	 }
	 

	
	cin >> x;
}
