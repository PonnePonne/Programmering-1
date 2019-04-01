#include <iostream>

using namespace std;

int main() {
	int tal = 0;
	int rad = 0;
for(int i = tal; i <= 10; i++){
	
	cout << tal;
	tal = tal + 1;
	if(tal == 9){
		cout << tal << endl;
		tal = 0;
		i = 0;	
		rad = rad + 1;
	}
	if(rad == 10){
		break;
	}

}
	return 0;
}
