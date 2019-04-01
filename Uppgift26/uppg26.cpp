#include <iostream>

using namespace std;

int main() {
	
	int array[5] = {1,10,3,7,14};
	int tal;
	
	cout << "Gissa ett tal" << endl;
	cin >> tal;
	
	for(int i = 0; i < 1;){
		if(tal == array[0]){
			cout << "Grattis" << endl;
			break;
		} else if(tal == array[1]){
			cout << "grattis" << endl;
			break;
		} else if(tal == array[2]){
			cout << "grattis" << endl;
			break;
		} else if(tal == array[3]){
			cout << "grattis" << endl;
			break;
		} else if(tal == array[4]){
			cout << "grattis" << endl;
			break;
		} else {
			cout << "Försök igen" << endl;
			cin >> tal;
		}
	}
	return 0;
}
