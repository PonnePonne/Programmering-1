#include <iostream>

using namespace std;

int main() {
	
int tal1 = 0;
int tal2 = 1;
int summa = 0;

cout << 0 << endl;
cout << 1 << endl;


for(int i = 0; i < 18; i++){
	tal2 = tal1 + tal2;
	tal1 = tal2 - tal1;
	cout << tal2 << endl;
	summa = summa + tal2 + 1;
}

cout << summa << endl;
	
	return 0;
}
