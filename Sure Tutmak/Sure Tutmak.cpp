#include <iostream>
#include <string>


using namespace std;

int main() 
{
int clock_t x;
   
   x = clock();
  
  
   for(int i = 0; i < 1000; i++)
   cout << "hey!\n";
  
   cout << ( clock() - x) / CLOCKS_PER_SEC;


	system("PAUSE");
	return 0;
}
