#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
	srand (time(0));
	int sida[6] {1,2,3,4,5,6};
	int slump;
	
	
	
	for(int i = 0; i < 5; i++){
		
		slump = rand()%6;
		cout << sida[slump] << endl;
	}
	
	return 0;
}
