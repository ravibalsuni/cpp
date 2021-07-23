//============================================================================
// Name        : SelectionSort.cpp
// Author      : Ravi Balsuni
// Version     :
// Copyright   : 
// Description : Selection Sort in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int* selectionSort(int *a, const int n);

int main() {

	int inputArray[4]={2,7,9,5};
	int n=4;
	int *pointerToArray = &inputArray[0];
	int *result=selectionSort(pointerToArray, n);

	cout << "\n\nSorted array is: ";
	for(int i=0; i<n; i++){
		cout << result[i] << " ";
	}
	return 0;
}

int* selectionSort( int *a, const int n){
	// sort the n integers a[0] to a[n-1] into non decreasing order.
	cout<< "selectionSort() starts - input array: " << endl;
	for(int i=0; i<n; i++){
			cout << a[i] << " ";
	}
	cout << "\n" << endl;

	for(int i=0 ; i<n ; i++){
		int j=i;
		//find the smallest integer in a[i] to a[n-1]
		for(int k=i+1; k < n; k++){
			if(a[k] < a[j])
				j=k;
			swap(a[i], a[j]);

			/*	//swap function logic
			 *
				 int temp = a[i];
				 a[i]=a[j];
				 a[j]=temp;
			*/
		}

		cout << "\n iteration - " << i << endl;
		for(int i=0; i<n; i++){
					cout << a[i] << " ";
		}
	}
	return a;
}
