#include <iostream>
using namespace std;

int main(){
	// Aritmatika
	int x = 20;
	int y = 10;
	
	cout << x + y << "\n";
	cout << x - y << "\n";
	cout << x * y << "\n";
	cout << x / y << "\n";
	cout << x % y << "\n";
	
	x++;
	cout << x << "\n";
	x--;
	cout << x << "\n";
	
	// Penugasan
	x+=5;
	cout << x << "\n";
	x-=5;
	cout << x << "\n";
	x*=5;
	cout << x << "\n";
	x/=5;
	cout << x << "\n";
	x%=5;
	cout << x << "\n";
	
	// perbandingan
	cout << (x == y) << "\n";
	cout << (x != y) << "\n";
	cout << (x >= y) << "\n";
	cout << (x <= y) << "\n";
	cout << (x < y) << "\n";
	cout << (x > y) << "\n";
	
	// Logika
	cout << (x > 3 && x < 10) << "\n";
	cout << (x > 3 || x < 10) << "\n";
	cout << !(x > 3 && x < 10) << "\n";
	
	return 0;
}
