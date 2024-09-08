#include <iostream>
#include <string>
//using namespace std;

int main(){
	std::string greeting = "Hello";
	
	std::string firstName = "John ";
	std::string lastName = "Doe";
	std::string fullName = firstName.append(lastName);
	std::cout << fullName << "\n";	
	
	std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::cout << txt.length() << "\n";
	std::cout << txt.size() << "\n";
	
	std::cout << greeting[0] << "\n";
	std::cout << greeting.at(0) << "\n";
	
	greeting[0] = 'Z';
	greeting.at(greeting.size()-1) = 'Z';
	
	std::cout << greeting << "\n";
	
	std::string input;
	std::getline (std::cin,input);
	
	std::cout << input << "\n";
	
	char greeting2[] = "Hello";
	std::cout << greeting2 << "\n";;
	return 0; 
}
