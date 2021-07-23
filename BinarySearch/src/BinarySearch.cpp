//============================================================================
// Name        : BinarySearch.cpp
// Author      : Ravi Balsuni
// Version     :
// Copyright   :
// Description : Binary Search in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

int binarySearch(int *a, const int x, const int n);

int main() {
	int inputArray[4]={2,5,7,9};
	int *pointerToArray = &inputArray[0];
	int searchElement = 7;
	int arrayLength=4;
	int result = binarySearch(pointerToArray, searchElement, arrayLength);
	if(result != -1)
		cout<< "Element is present at index : " << result << endl;
	else
		cout << "Element not found in the array. " <<  endl;
	return 0;
}

int binarySearch(int *array, const int element, const int arrayLength){
	//search the sorted array a[0],...a[n-1] for element
	int left = 0, right = arrayLength-1;
	while(left <= right){
		int middle = (left+right)/2;
		if(element < array[middle])
			right = middle-1;
		else if (element > array[middle])
			left = middle+1;
		else
			return middle;
	}
	return -1;
}
