#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() 
{
	srand ( time(NULL) );
	int x, y, islem, sonuc, kac;
	cout << "Kac soru:";
	cin >> kac;
	
	for( int i = 0; 1 < kac ; i++)
	{
	
	x = rand() % 50;
	y = rand() % 50;
	islem = rand() % 3;
	
	if( islem == 0) 
	{
	cout << x << " + " << y << " = ";
	cin >> sonuc;
    }
	if( islem == 1) 
	{
	cout << x << " - " << y << " = ";
	cin >> sonuc;
    }
	if( islem == 2) 
	{
	cout << x << " * " << y << " = ";
	cin >> sonuc;
    }
	
		if( islem == 0) 
		if( ( x + y ) == sonuc )
		    cout << "!!!DOGRU!!!" << "\n";
		else
		    cout << "!!!YANLÝS!!! = Cevap:" << x + y << "\n";
	
	    if( islem == 1) 
		if( ( x - y ) == sonuc )
		    cout << "!!!DOGRU!!!" << "\n";
		else
		    cout << "!!!YANLÝS!!! = Cevap:" << x - y << "\n";
	
	
       	if( islem == 2) 
		if( ( x * y ) == sonuc )
		    cout << "!!!DOGRU!!!" << "\n";
		else
		    cout << "!!!YANLÝS!!! = Cevap:" << x * y << "\n";
	
	}


	system("PAUSE");
	return EXIT_SUCCESS;
}
