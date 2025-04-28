//
// Created by Salih on 4/28/2025.
//

#include "MergeSortClass.h"


vector<int> MergeSortClass::mergeSort(vector<int> *arr) {
	if (arr->size() <= 1) {
		return arr[0];
	}
	else {
		int mid = arr->size() / 2;

		vector<int> *left_hlf = new vector<int>;
		vector<int> *right_hlf = new vector<int>;

		return merge(left_hlf, right_hlf);
	}
}


vector<int> MergeSortClass::merge(vector<int> *left_hlf, vector<int> *right_hlf) {
	vector <int> result;
	int lCounter = 0, rCounter = 0;

	do {
		if (left_hlf->begin() <= right_hlf->begin()) {
			int temp = left_hlf->at(lCounter);

			result.push_back(temp);
			left_hlf->erase(left_hlf->begin());
			lCounter++;
		}
		else {
			int temp = right_hlf->at(rCounter);

			result.push_back(temp);
			right_hlf->erase(right_hlf->begin());
			rCounter++;
		}
	} while (!left_hlf->empty() && !right_hlf->empty());


	return result;
}