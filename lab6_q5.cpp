//Q.5. Write a program that includes the three (Q.2,3,4) functions.

#include<iostream>
using namespace std;


int ADD1(int x, int y){
	int sum = x+y;
	return sum;
}


int COMPARE1(int x, int y){
	int z;
	if (x>y){
		z = x;
	}
	else {
		z = y; 
	}
	return z;
}


int COMPARE2(int x, int y){
	int z;
	if (x<y){
		z = x;
	}
	else {
		z = y; 
	}
	return z;
}



/*
Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 
*/

int main(){
	
	//declare variables
	int a,b,c,d,e,f;
	
	//inputs
	cout << " Welcome to the e-Operator! " << endl;
	cout << " Press 1, if you want to add " << endl;
	cout << " Press 2, if you want to find max " << endl;
	cout << " Press 3, if you want to find min " << endl;
	cin >> a;

	cout << "Enter your two numbers :" << endl;
	cin >> b >> c;

	//operations and results
	if (a==1){ 
		d = ADD1(b,c); // y=f(x)
		cout << "The sum of your numbers is " << d << endl;
	}

	else if (a==2){
		e = COMPARE1(b,c);
		cout << "The greater number is " << e << endl;
	}

	else if (a==3){
		f = COMPARE2(b,c);
		cout << "The smaller number is " << f << endl;
	}
	
	else {
		cout << "FUNNY Ha!" << endl;
	}

	return 0;
}


















