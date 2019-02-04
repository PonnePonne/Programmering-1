#include <iostream>

using namespace std;

int main() {
	
	int tal1, tal2, tal3, tal4, tal5, tal6, summat, summam, summas;
	cout << "Antal timmar första varvet" << endl;
	cin >> tal1;
	cout << "Antal minuter första varvet" << endl;
	cin >> tal2;
	cout << "antal sekunder första valet" << endl;
	cin >> tal3;
	cout << "Antal timmar andra varvet" << endl;
	cin >> tal4;
	cout << "Antal minuter andra varvet" << endl;
	cin >> tal5;
	cout << "antal sekunder andra valet" << endl;
	cin >> tal6;
	
	summat = tal1 + tal4;
	summam = tal2 + tal5;
	summas = tal3 + tal6;
	
	if (summas > 59){
		summam = summam + 1;
		summas = summas - 60;
	}
	
	if (summam > 59){
		summat = summat + 1;
		summam = summam - 60;
	}
	
	cout << "Timmar: ";
	cout << summat;
	cout << " minuter: ";
	cout << summam;
	cout << " sekunder: ";
	cout << summas;
	
	return 0;
}
