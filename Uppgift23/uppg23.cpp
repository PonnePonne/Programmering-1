#include <iostream>

using namespace std;

int main() {
	int x = 9;
	int array[10] = {34,32,65,31,54,45,1,3,98,10};
	
	while(x >= 0){
		cout << array[x] << endl;
		x = x - 1;
	}
	return 0;
}
