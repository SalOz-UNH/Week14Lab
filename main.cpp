/**
 * MergeSort.cpp
 * Uses merge sort to sort a list of user inputted numbers.
 *
 * @author Salih Ozdemir and Darwin Sanchez
 */

#include <iostream>
#include <vector>

#include "MergeSortClass.h"

using namespace std;

/**
 * Function main begins with program execution
 *
 * @return The result of the program execution
 */

int main() {

	MergeSortClass sorter;
	vector<int> vec;

	int input;

	cout << "Enter your numbers (-1 to quit):" << endl;
	do {
		cin >> input;
		if (input != -1) {
			vec.push_back(input);
		} else {
			break;
		}
	} while (input != -1);


	vector <int> sortedVec = sorter.mergeSort(&vec);

	cout << "Unsorted vector: " << endl;
	for (int i = 0; i < vec.size(); i++) {
		if (i < vec.size() - 1) {
			cout << vec[i] << ", ";
		}
		else {
			cout << vec[i] << endl;
		}
	}
	cout << endl;


	cout << "Sorted vector: " << endl;
	for (int i = 0; i < sortedVec.size(); i++) {
		if (i < sortedVec.size() - 1) {
			cout << sortedVec[i] << ", ";
		}
		else {
			cout << sortedVec[i] << endl;
		}
	}
	return 0;
}
