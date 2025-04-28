/**
 * [program_name].cpp
 * [program_explanation]
 *
 * @author Salih Ozdemir
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

	vector <int> vec {12,11,13,5,6,7};

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

	sorter.mergeSort(&vec);

	return 0;
}
