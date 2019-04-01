#include <iostream>

using namespace std;

int main() {
	
	char ord[100];
	char mat[3];
	
	cout << "Skriv in ett ord" << endl;
	cin >> ord;
	
	for(int i = 0; i < 99; i++){
	
	if(ord[i] == 'A'or ord[i] == 'a' or ord[i] == 'T' or ord[i] == 't'){
	
	break;
} else if(ord[i] == 'M' or ord[i] == 'm'){
	mat[0] = 'M';
}
}
	for(int i = 0; i < 99; i++){
	
	if(ord[i] == 'T' or ord[i] == 't'){
	
	break;
} else if(ord[i] == 'A' or ord[i] == 'a'){
	mat[1] = 'A';
}
}
	for(int i = 0; i < 99; i++){
	
	if(ord[i] == 'T' or ord[i] == 't'){
		mat[2] = 'T';
		cout << mat;
	}
}
	return 0;
}
