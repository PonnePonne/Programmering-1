#include <iostream>



using namespace std;



float FunctionFToC(float grader);


float FunctionCToF(float grader);


float FormelVal(char val, float grader);


int main() {

	char val;
	float grader, celcius, fahrenheit;

	while(val != 'C' and val != 'F'){

	cout  << "Vill du konvertera fr�n Celsius eller fahrenheit? (C f�r Celcius eller F f�r fahrenheit)" << endl;
	cin >> val;

	}

	cout << "Skriv in antal grader:" << endl;
	cin >> grader;

	cout << FormelVal(val, grader);

	return 0;

}




float FormelVal(char val, float grader) {

	float result;

	if(val == 'C'){

		float FunctionCToF(float grader);

	} else if(val == 'F') {

		FunctionFToC(grader);

	}

	

	if(val == 'C'){

		result = FunctionCToF(grader);

	} else if (val == 'F') {

		result = FunctionFToC(grader);

	}

	return result;

}




float FunctionCToF(float grader) {	

	float celcius = grader, fahrenheit;

	fahrenheit = celcius * 1.8 + 32;


	return fahrenheit;

}




float FunctionFToC(float grader) {

	float fahrenheit = grader, celcius;

	celcius = (fahrenheit - 32) * 0.5556;

	
	return celcius;

}
