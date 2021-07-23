//============================================================================
// Name        : BinarySearchRecursive.cpp
// Author      : Ravi Balsuni
// Version     :
// Copyright   : 
// Description : Binary Search Recursively in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int binarySearchRec(int *a, const int x, const int left, const int right);

int main() {
	int inputArray[4]={2,5,7,9};
		int *pointerToArray = &inputArray[0];
		int searchElement = 7;
		int left=0;
		int right =3;
		int result = binarySearchRec(pointerToArray, searchElement, left, right);
		if(result != -1)
			cout<< "Element is present at index : " << result << endl;
		else
			cout << "Element not found in the array. " <<  endl;
		return 0;
}

int binarySearchRec(int *array, const int element, const int left, const int right){
	//search the sorted array a[0],...a[n-1] for element
	if(left <= right){
		int middle = (left+right)/2;
		if(element < array[middle])
			return binarySearchRec(array, element, left, middle-1);
		else if (element > array[middle])
			return binarySearchRec(array, element, middle+1, right);
		else
			return middle;
	}
	return -1;
}

