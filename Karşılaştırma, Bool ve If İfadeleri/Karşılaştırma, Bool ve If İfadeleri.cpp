//   > b�y�k
//   < k���k
//   >= b�y�k e�ittir
//   <= b�y�k esittir
//   == e�ittir
//   != e�it de�ildir

#include <iostream>
using std::cout;
using std::cin;

int main() {
	int x;
	int y;
	
	cout << "l�tfen bir deger girin (2. degerden buyuk olsun) = ";
	cin >> x;
	cout << "l�tfen bir deger girin (1. degerden kucuk olsun) = ";
	cin >> y;
	
	if(x > y)
	    cout << "Dogru tebrikler";
	else
	    cout << "San�r�m yanl��";
	    
	    
}
