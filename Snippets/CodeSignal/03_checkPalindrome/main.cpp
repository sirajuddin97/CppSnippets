#include <iostream>
#include <vector>

bool checkPalindrome(std::string inputString) {
    std::vector<char> v;
    int length = inputString.length();
    for(int i = 0; i )
}

int main(){
	if(checkPalindrome("abba")) std::cout << "riktig";
	else std::cout << "feil";
	return 0;
}