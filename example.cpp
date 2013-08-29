#include<iostream>
#include<ctime>
using namespace std;

int numberGenerator(int range){
		
	int currentTime = std::time(0);
	
	return currentTime % range;

}

int main() {
	
	cout << "The computer has guessed a number between 1 and 10, try to guess it!" << endl;
	
	int number = numberGenerator(10);
	cout << number << endl;
	
	int c;
	cin >> c;
	
	if(c == number){
		cout << "You guessed it!" << endl;
	}else{
		cout << "You didn't guess it" << endl;
	}
	return 0;
}