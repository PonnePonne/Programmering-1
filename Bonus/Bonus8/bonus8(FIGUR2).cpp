#include <iostream>

using namespace std;

int main() {
	int tal = 0;
	int antal = 0;
	int rad = 0;
for(int i = tal; i <= 10; i++){
	if(antal == 10){
		break;
	}
	cout << tal;
	if(antal == tal){
		cout<<endl;
		tal = 0;
		i = 0;
		antal = antal + 1;
	} else {
	
		tal = tal + 1;
	}
}
	return 0;
}
