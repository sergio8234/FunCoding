#include <iostream>

using namespace std;

void nums(int[]);
void counter(int[]);


int main() {
	
	cout << "Enter the however much numbers between 1-100 that you want, when you are done type 0 to finish: " << endl;
	int myarray[100];
	for (int i = 0; i < 100; i++) {
		cin >> myarray[i];					//array for storing values from user
		if (myarray[i] == 0) {
			break;
		}
		
	}

	nums(myarray);

	system("pause");
	return 0;

}

void nums(int myarray[]) {

	for (int i = 0; i < myarray[i]; i++) {
		cout << myarray[i] << " ";			//This code only prints out the all the elements if the numbers are in order. How do I get it to print out the elements the user inputs?
	}

}

void counter(int myarray[]) {


}