#include <iostream>

using namespace std;

int main() {
	
char tecken;
char fraga[2];
fraga[0] = 'j';
fraga[1] = 'a';
float tal1, tal2, summa;

while(fraga[0] == 'j' and fraga[1] == 'a'){
	

cout << "Skriv in det första talet" << endl;
cin >> tal1;
cout << "+, -, * eller /?" << endl;
cin >> tecken;
cout << "Skriv in det andra talet" << endl;
cin >> tal2;

if(tecken == '+'){
	summa = tal1 + tal2;
} else if(tecken == '-'){
	summa = tal1 - tal2;
} else if(tecken == '*'){
	summa = tal1 * tal2;
} else if(tecken == '/'){
	summa = tal1 / tal2;
}

cout << "Svaret är: " << summa << endl;

cout << "Vill du använda räknaren igen?" << endl;
cin >> fraga[0];
cin >> fraga[1];
}


	return 0;
}
