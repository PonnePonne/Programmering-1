#include <iostream>

using namespace std;

int main() {
	int tal = 0;
	int antal = 10;
	int rad = 0;
	int mellanslag = 0;
for(int i = tal; i <= 10; i++){
	while(mellanslag > 0){
		cout << " ";
	}
	if(tal == antal){
		cout<<endl;
		mellanslag = mellanslag + 1;
	}
	cout << tal;
	tal = tal + 1;
}
	return 0;
}
