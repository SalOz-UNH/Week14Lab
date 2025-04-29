//
// Created by Salih on 4/28/2025.
//

#include "MergeSortClass.h"


vector<int> MergeSortClass::mergeSort(vector<int> *arr) {
	if (arr->size() <= 1) {
		return *arr;
	}
	else {
		int mid = arr->size() / 2;
		vector <int> left_hlf(arr->begin(), arr->begin() + mid);
		vector <int> right_hlf(arr->begin() + mid, arr->end());

		vector <int> leftSorted = mergeSort(&left_hlf);
		vector <int> rightSorted = mergeSort(&right_hlf);

		return merge(&leftSorted, &rightSorted);
	}
}


vector<int> MergeSortClass::merge(vector<int> *left_hlf, vector<int> *right_hlf) {
	vector <int> result;

	do {
		if (left_hlf->at(0) <= right_hlf->at(0)) {
			result.push_back(left_hlf->at(0));
			left_hlf->erase(left_hlf->begin());
		}
		else {
			result.push_back(right_hlf->at(0));
			right_hlf->erase(right_hlf->begin());
		}
	} while (!left_hlf->empty() && !right_hlf->empty());

	result.insert(result.end(), left_hlf->begin(), left_hlf->end());
	result.insert(result.end(), right_hlf->begin(), right_hlf->end());


	return result;
}