//   > büyük
//   < küçük
//   >= büyük eþittir
//   <= büyük esittir
//   == eþittir
//   != eþit deðildir

#include <iostream>
using std::cout;
using std::cin;

int main() {
	int x;
	int y;
	
	cout << "lütfen bir deger girin (2. degerden buyuk olsun) = ";
	cin >> x;
	cout << "lütfen bir deger girin (1. degerden kucuk olsun) = ";
	cin >> y;
	
	if(x > y)
	    cout << "Dogru tebrikler";
	else
	    cout << "Sanýrým yanlýþ";
	    
	    
}
