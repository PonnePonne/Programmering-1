#include <iostream>

using namespace std;

int main() {
	
int star = 10;
int antal = 7;
int strack;
int start = 0;

cout << "n�r ska str�cken b�rja"<< endl;
cin >> strack;

if(strack > 10){
	cout << "FEL";
} else

while(antal > 1){
	start = start + 1;
	if (strack == 11) {
		strack = 1;
	}
	if(strack == start){
		cout << "-";
	} 
	star = star - 1;
	cout << "*";
	if(strack == 10 and star == 1){
		cout << "-" << endl;
		strack = strack + 1;
		star = star + 9;
		start = start - start;
		antal = antal - 1;
	
	}
	if(star == 1){
		cout <<endl;
		star = star + 9;
		start = start - start;
		strack = strack + 1;
		antal = antal - 1;
	
	}
	if(strack == 11){
		strack = 1;
	}
              }
      
	return 0;
}
