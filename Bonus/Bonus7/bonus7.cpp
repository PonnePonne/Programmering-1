#include <iostream>

using namespace std;

int main() {
	

int start = 0;

int antal, strack, star, starb;

cout << "n�r ska str�cken b�rja"<< endl;
cin >> strack;
cout << "hur m�nga rader" << endl;
cin >> antal;
cout << "hur m�nga stj�rnor" << endl;
cin >> star;

antal = antal + 1;
starb = star;

if(strack > starb){
	cout << "FEL";
} else

while(antal > 1){
	start = start + 1;
	if (strack > starb) {
		strack = 1;
	}
	if(strack == start){
		cout << "-";
	} 
	star = star - 1;
	cout << "*";
	if(strack == starb and star == 1){
		cout << "-" << endl;
		strack = strack + 1;
		star = star + starb - 1;
		start = start - start;
		antal = antal - 1;
	
	}
	if(star == 1){
		cout <<endl;
		star = star + starb - 1;
		start = start - start;
		strack = strack + 1;
		antal = antal - 1;
	
	}
	if(strack > starb){
		strack = 1;
	}
              }
      
	return 0;
}
