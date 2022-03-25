#include <iostream>
using namespace std;


int main() {
    int x,y,toplam;
    int sonuc;
    
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    
    
    toplam = x + y;
    
    cout << x;
    cout << " + ";
    cout << y;
    cout << " sonucu nedir?";
    cin >> sonuc;
    
    if(toplam == sonuc) {
    	cout << " Dogru ";
    	cout << " Oldu ";	
	}
    else {
    	cout << " Yanlis ";
    	cout << " Bitti ";
	}

cin >> x;
}
