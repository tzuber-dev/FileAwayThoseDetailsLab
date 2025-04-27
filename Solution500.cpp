#include <cassert>
#include "fileaway.h"
#include <iostream>
#include <fstream>

using namespace std;


void calculateedgecases() {


	//test1
	ofstream testcase1("testcase1.txt");
	testcase1 << "1 2 3 4 5 6";
	testcase1.close();

	ifstream case1("testcase1.txt");
	getthedata(case1);


	//test2

	ofstream testcase2("testcase2.txt");
	testcase2.close();

	ifstream case2("testcase2.txt");
	getthedata(case2);

	//test 3

	ofstream testcase3("testcase3.txt");
	testcase3 << "5";
	testcase3.close();

	ifstream case3("testcase3.txt");
	getthedata(case3);

}

int main() {
	calculateedgecases();
	return 0;
}