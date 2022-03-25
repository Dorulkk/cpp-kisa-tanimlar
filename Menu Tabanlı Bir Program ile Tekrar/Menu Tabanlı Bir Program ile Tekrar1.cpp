#include <iostream>
using namespace std;

int main() 
{
	int secim;
	secim = -1;	
	
	
	while( secim != 0) 
	{
		cout << "1.Toplama\n2.Cikarma\n0.Cikis\n\nSeciminizi giriniz : ";
		cin >> secim;
		if( ! (secim == 1 || secim == 2 || secim == 0))
		{
		  cout << "Lutfen gecerli bir sayi giriniz." << endl;	
		}
		
		if( secim == 1)
		{
			int A,B;
			cout << "A'yi giriniz: ";
			cin >> A;
			cout << "B'yi giriniz: "; 
			cin >> B;
			cout << "A + B = "<< A + B << endl;
			
		}
		
			if( secim == 2)
		{
			int A,B;
			cout << "A'yi giriniz: ";
			cin >> A;
			cout << "B'yi giriniz: ";
			cin >> B;
			cout << "A - B = " << A + B << endl;
			
		}
}

}

