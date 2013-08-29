#include<iostream>
using namespace std;

int main(){

	int number = 1;	
	while(number < 101){
	
		cout << number;
	
		if(number % 3 == 0){
			cout << "fizz";
		}

		if(number % 5 == 0){
			cout << "buzz";
		}
		
		cout << endl;
		
		number++;
	}
}