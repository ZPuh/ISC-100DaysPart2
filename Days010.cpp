#include <iostream>
using namespace std;

int main (){
	// If else
	int time = 20;
  	if (time < 18) {
    cout << "Good day.\n";
  	} else {
    cout << "Good evening.\n" ;
  	}
	
	// ternary
	string result = (time < 18) ? "Good day.\n" : "Good evening.\n";
  	cout << result;
	return 0;
}
