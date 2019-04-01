#include <iostream>

using namespace std;



string Nyf(string ett){
	
	return ett;
	
}

int main() {
	
	string ord1;
	string ord2;
	
	cout << "Skriv in ett ord" << endl;
	cin >> ord1;
	cout << "Skriv in ett till ord" << endl;
	cin >> ord2;

	string ny;
	string ny1;
	
	ny = Nyf(ord1);
	

	cout << ny;
	
	ny1 = Nyf(ord2);
	
	cout << ny1 << ny1 << ny;
	
	
	
	return 0;
}
