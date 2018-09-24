/*
Q.6. Sum of even and odd
e. Write a main program.  
i. Declare a variable called sumEven in the main() for the sumEvenNumbers(). 
sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value. 
ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). 
sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value. 
iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). 
sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value. 
iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). 
sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value. 
v.Then display the values
*/

#include<iostream>
using namespace std;

//i. Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value. 

void sumEvenNumbers(int firstNum, int secondNum, int &sumEven){
	int x;
	sumEven = 0;
	if (firstNum%2==0 and firstNum>=0 and secondNum>=0){
		x = firstNum+2;
		for (;x<secondNum; x=x+2){
		sumEven=sumEven+x;
		}
	}
	else if (firstNum%2!=0 and firstNum>=0 and secondNum>=0) { 
		x = firstNum+1;
		for (;x<secondNum; x=x+2){
		sumEven=sumEven+x;
		}
	}
	else {
		cout << "Negative numbers are not natural numbers!" << endl;	
	}	
}

//ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value. 

void sumOddNumbers(int firstNum, int secondNum, int &sumOdd){
	int x;
	sumOdd = 0;
	if (firstNum%2!=0 and firstNum>=0 and secondNum>=0){
		x = firstNum+2;
		for (;x<secondNum; x=x+2){
		sumOdd=sumOdd+x;
		}
	}
	else if (firstNum%2==0 and firstNum>=0 and secondNum>=0) { 
		x = firstNum+1;
		for (;x<secondNum; x=x+2){
		sumOdd=sumOdd+x;
		}
	}
	else {
		cout << "Negative numbers are not natural numbers!" << endl;	
	}	
}

//iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value. 

void sumSquareEvenNumbers(int firstNum, int secondNum, int &sumSquareEven){
	int x;
	sumSquareEven = 0;
	if (firstNum%2==0 and firstNum>=0 and secondNum>=0){
		x = firstNum+2;
		while (x<secondNum){
		sumSquareEven=sumSquareEven+x*x;
		x=x+2;
		}
	}
	else if (firstNum%2!=0 and firstNum>=0 and secondNum>=0) { 
		x = firstNum+1;
		while (x<secondNum){
		sumSquareEven=sumSquareEven+x*x;
		x=x+2;
		}
	}
	else {
		cout << "Negative numbers are not natural numbers!" << endl;	
	}	
}

//iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.   

void sumSquareOddNumbers(int firstNum, int secondNum, int &sumSquareOdd){
	int x;
	sumSquareOdd = 0;
	if (firstNum%2!=0 and firstNum>=0 and secondNum>=0){
		x = firstNum+2;
		while (x<secondNum){
		sumSquareOdd=sumSquareOdd+x*x;
		x=x+2;
		}
	}
	else if (firstNum%2==0 and firstNum>=0 and secondNum>=0) { 
		x = firstNum+1;
		while (x<secondNum){
		sumSquareOdd=sumSquareOdd+x*x;
		x=x+2;
		}
	}
	else {
		cout << "Negative numbers are not natural numbers!" << endl;	
	}
}

int main(){

	int sumEven,sumOdd,sumSquareEven,sumSquareOdd,b,c;
	
	cout << "Enter two natural numbers :" << endl;
	cin >> b >> c;
	
	sumEvenNumbers(b,c,sumEven);
	
	if (sumEven>0){
		cout << "Sum of all even numbers between your numbers is "<< sumEven << endl;
	}
	
	sumOddNumbers(b,c,sumOdd);
	
	if (sumOdd>0){
		cout << "Sum of all odd numbers between your numbers is "<< sumOdd << endl;
	}

	sumSquareEvenNumbers(b,c,sumSquareEven);
	
	if (sumSquareEven>0){
		cout << "Sum of square of all even numbers between your numbers is "<<  sumSquareEven << endl;
	}
	
	sumSquareOddNumbers(b,c,sumSquareOdd);
	
	if (sumSquareOdd>0){
		cout << "Sum of square of all odd numbers between your numbers is "<< sumSquareOdd << endl;
	}

	return 0;
}
