#include <iostream>

using namespace std;

int main() {
	
char tecken;
char fraga[2];
fraga[0] = 'j';
fraga[1] = 'a';
float tal1, tal2, summa;

while(fraga[0] == 'j' and fraga[1] == 'a'){
	

cout << "Skriv in uträkningen" << endl;
cin >> tal1 >> tecken >> tal2;


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
