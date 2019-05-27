#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	int tid = time(0);
	srand(tid);
	
cout << rand()%10+1 << endl;
cout << rand()%10+1 << endl;
	return 0;
}
