#include <iostream>
#include <string>
#include "fileaway.h"
#include <fstream>

using namespace std;

int main() {
	cout << "Welcome to the NSP!" << endl;
	cout << "Enter file name: ";
	string userfile;
	cin >> userfile;

	ifstream currentfile(userfile);

	if (!currentfile.is_open()) {
		cout << "File " << userfile << " can't be launched!" << endl;
		return 1;


	}
	cout << userfile << " Launched!" << endl;

	getthedata(currentfile);

	currentfile.close();
	return 0;

}