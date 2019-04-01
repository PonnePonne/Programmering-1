#include <iostream>

using namespace std;

int main() {
	
	bool increase = false;
	int tal = 0;
	
	while(increase == false){
		cout << tal;
		tal = tal + 1;
		if(tal == 7){
			increase = true;
		}
	}
	while(increase == true){
		cout << tal;
		tal = tal - 1;
		if(tal == 0){
			cout<< tal << endl;
			break;
		}
	}
	return 0;
}
