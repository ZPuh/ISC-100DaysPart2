#include <iostream>
using namespace std;

int main (){
	int day;
	
	cout << "Masukan Hari(1-7): ";
	cin >> day;
	
	switch(day){
		case 1:
			cout << "Senin";
			break;
		case 2:
			cout << "selasa";
			break;
		case 3:
			cout << "Rabu";
			break;
		case 4:
			cout << "Kamis";
			break;
		case 5:
			cout << "Jumat";
			break;
		case 6:
			cout << "Sabtu";
			break;
		case 7:
			cout << "Minggu";
			break;
		default :
			cout << "Masukkan 1-7";
			
	}
	
	return 0;
}
