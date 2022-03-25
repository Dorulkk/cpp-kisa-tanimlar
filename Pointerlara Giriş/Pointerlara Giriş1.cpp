#include <iostream>
using namespace std;

int main() {
	int x;
	x = 5;
	
	cout << "x = " << x << "\n";
	cout << "referance x = " << &x << "\n";
	
	int * ptr;
	ptr = &x;
	cout << "ptr = " << ptr << "\n";
	cout << "dereferance ptr = " << *ptr << "\n";
	
	int t;
    t = 10;
    ptr = &t;
	cout << "t = " << t << "\n";
	cout << "referance t = " << &t	 << "\n";
	
	ptr = &t;
	cout << "ptr = " << ptr << "\n";
	cout << "dereferance ptr = " << *ptr << "\n";
	
	*ptr = ;
	
	cin >> x;
}
