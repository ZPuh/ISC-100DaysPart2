#include <iostream>
using namespace std;

int main(){
	int i = 0;
	while (i < 5){
		cout << i << " ";
		i++;
	}
	cout << "\n";
	
	i = 0;
	
	do{
		cout << i << " ";
		i++;
	}while(i < 5);
	return 0;
}
