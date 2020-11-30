#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d); //function prototype

// hackerRank practice: For Loops
int main(){
// ----------------------- CHALLENGE 1---------------------------------------------

const char *arr[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
int n1, n2;
string n1EnglishWord, n2EnglishWord;

cout << "Enter your values separated by the Enter key: ";
cin >> n1;
cin >> n2;

for(int n=n1; n<=n2;++n){
	if (n<=9){
		cout << arr[n-1] << "\n";
	} 
	else{ 
		if (n%2==0) cout << "even\n";
		else cout << "odd\n";

	} //end else

} //end for

	return 0; 

}
