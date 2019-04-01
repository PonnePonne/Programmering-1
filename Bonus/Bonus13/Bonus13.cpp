#include <iostream>

using namespace std;

int main() {


int array[10];
bool bol1;
bool bol2;
bool bol3;
bool bol4;
bool bol5;
bool bol6;
bool bol7;
bool bol8;
bool bol9;
bool check = false;
bool samma = false;

cout << "Skriv in ett tal" << endl;
cin >> array[0];
cout << "Skriv in ett till tal" << endl;
cin >> array[1];
cout << "Skriv in ett till tal" << endl;
cin >> array[2];
cout << "Skriv in ett till tal" << endl;
cin >> array[3];
cout << "Skriv in ett till tal" << endl;
cin >> array[4];
cout << "Skriv in ett till tal" << endl;
cin >> array[5];
cout << "Skriv in ett till tal" << endl;
cin >> array[6];
cout << "Skriv in ett till tal" << endl;
cin >> array[7];
cout << "Skriv in ett till tal" << endl;
cin >> array[8];
cout << "Skriv in ett till tal" << endl;
cin >> array[9];

if(array[0] < array[1]){
	bol1 = false;
} else if(array[0] > array[1]){
	bol1 = true;
} else if(array[0] == array[1]){
	samma == true;
}

if(array[1] < array[2]){
	bol2 = false;
	samma = false;
} else if(array[1] > array[2]){
	bol2 = true;
	samma = false;
} else {
	samma = true;
}
if(array[2] < array[3]){
	bol3 = false;
	samma = false;
} else if(array[2] > array[3]){
	bol3 = true;
	samma = false;
} else {
	samma = true;
}
if(array[3] < array[4]){
	bol4 = false;
	samma = false;
} else if(array[3] > array[4]){
	bol4 = true;
	samma = false;
} else {
	samma = true;
}
if(array[4] < array[5]){
	bol5 = false;
	samma = false;
} else if(array[4] > array[5]){
	bol5 = true;
	 samma = false;
} else {
	samma = true;
}
if(array[5] < array[6]){
	bol6 = false;
	 samma = false;
} else if(array[5] > array[6]){
	bol6 = true;
	 samma = false;
} else {
	samma = true;
}
if(array[6] < array[7]){
	bol7 = false;
	 samma = false;
} else if(array[6] > array[7]){
	bol7 = true;
	 samma = false;
} else {
	samma = true;
}
if(array[7] < array[8]){
	bol8 = false;
	 samma = false;
} else if(array[7] > array[8]){
	bol8 = true;
	 samma = false;
} else {
	samma = true;
}

if(array[8] < array[9]){
	bol9 = false;
	samma = false;
} else if(array[8] > array[9]){
	bol9 = true;
	samma = false;
} else {
	samma = true;
}

if(bol1 == false and bol2 == false and bol3 == false and bol4 == false and bol5 == false and bol6 == false and bol7 == false and bol8 == false and bol9 == false){

cout << "Talen ökar varje gång" << endl;
} else if(bol1 == true and bol2 == true and bol3 == true and bol4 == true and bol5 == true and bol6 == true and bol7 == true and bol8 == true and bol9 == true){
	cout << "Talen sjunker varje gång" << endl;
} else {
	check = true;
}

if(check == true and samma == false){
	cout << "Går både upp och ner" << endl;
} else if(samma == true and check == true){
	cout << "Alla tal är samma" << endl;
}
	return 0;
}
