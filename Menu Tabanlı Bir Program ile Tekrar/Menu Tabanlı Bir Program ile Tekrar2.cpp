#include <iostream>
#include <string>
using namespace std;

int main() 
{

	int secim;
	secim = -1;	
	
	
	string isim;
	
	while( secim != 0) 
	{
		cout << "1.Toplama\n2.Cikarma\n3.carpma\n0.Cikis\n\nSeciminizi giriniz : ";
		cin >> secim;
		if( ! (secim == 1 || secim == 2 || secim == 3 ||secim == 0))
		{
		  cout << "Lutfen gecerli bir sayi giriniz." << endl;	
		}
		
	if( (secim == 1 || secim == 2 || secim == 3)){
	
			int A,B;
			cout << "A'yi giriniz: ";
			cin >> A;
			cout << "B'yi giriniz: "; 
			cin >> B;
			if(secim == 1)
			cout << A << " + " << B << " = " << A + B << endl << "\n";
			if(secim == 2)
			cout << A << " - " << B << " = " << A - B << endl << "\n";
			if(secim == 3)
		    cout << A << " * " << B << " = " << A * B << endl << "\n";
   
  }
 }
}
