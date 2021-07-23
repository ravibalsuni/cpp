//============================================================================
// Name        : PermutationGenerator.cpp
// Author      : Ravi Balsuni
// Version     :
// Copyright   : 
// Description : Permutation Generator Recursive in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void permutations(char * a, const int k, const int m);
int main() {
	char charArray[] = {'a','b','c'};
	int n=3;
	int k=0;
	char * pointerToArray = charArray;
	permutations(pointerToArray, k, n-1);
	return 0;
}

void permutations(char * a, const int k, const int m){
	if(k==m){
		for(int i=0;i<=m;i++){
			cout<<a[i]<<" ";
		}
		cout << endl;
	}
	else{
		for(int i=k;i<=m;i++){
			swap(a[k],a[i]);;
			permutations(a, k+1, m);
			swap(a[k],a[i]);;
		}
	}
}
