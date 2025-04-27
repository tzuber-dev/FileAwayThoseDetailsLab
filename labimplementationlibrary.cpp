#include <fstream>
#include <iostream>
#include "fileaway.h"
#include <cmath>

using namespace std;

void getthedata(ifstream& currentfile) {
	double integerval;
	double sumvaluex = 0;
	double sumvaluexSq = 0;
	double minimumvalueintegerx = INFINITY;
    double maximumvaluex = -INFINITY;   //we assigned -INFINITY & INFINITY as parameters that ensure numbers wont go out of range
	int counttracker = 0;

	while (currentfile >> integerval) {
			sumvaluex += integerval;
			sumvaluexSq += integerval * integerval;
			if (integerval > maximumvaluex) maximumvaluex = integerval;
			if (integerval < minimumvalueintegerx) minimumvalueintegerx = integerval;
			counttracker++;
	}
	if (counttracker == 0) {
			cout << "Data not discovered." <<std:: endl;

			return;
	}

	double meanresult = sumvaluex / counttracker;
	double varianceresult = (sumvaluexSq - (sumvaluex * sumvaluex / counttracker)) / (counttracker - 1);
	double standarddevresult = sqrt(varianceresult);

	cout << " Count result: " << counttracker << endl;

	cout << "Mean result: " << meanresult << endl;

	cout << "Std Dev Result: " << standarddevresult << endl;
	cout << "Maximum result: " << maximumvaluex << endl;
	cout << "Minimum result: " << minimumvalueintegerx << endl;

	cout << "Thanks for using the Number Statistics Program!";


}
