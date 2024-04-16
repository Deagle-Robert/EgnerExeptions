#include <iostream>
#include <string>
#include <exception>

using namespace std;
char character(char,int);
int main() {
	cout << character('f',-32) << endl;







}





char character(char start, int offset){
	return start + offset;
};