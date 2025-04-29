//
// Created by Salih on 4/28/2025.
//

#ifndef MERGESORTCLASS_H
#define MERGESORTCLASS_H

#include <vector>

using namespace std;

class MergeSortClass {

public:

	// Separates the list into 2 lists for merge sort
	vector<int> mergeSort(vector<int>* arr);

	// Sorts and returns the merged (and sorted) numbers
    vector<int> merge(vector<int>* left_hlf, vector<int>* right_hlf);

};



#endif //MERGESORTCLASS_H
