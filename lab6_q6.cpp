/*
Q.6. Sum of even and odd 
a. Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value 
b. Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value 
c. Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value.  
d. Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value.  
e. Write a main program.  
i. Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value. 
ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value. 
iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value. 
iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value. 
v.Then display the values
*/


#include<iostream>
using namespace std;


//a. Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value 

int sumEvenNumbers(int firstNum, int secondNum){
	int x,sum;
	sum = 0;
	if (firstNum%2==0 and firstNum>=0 and secondNum>=0){
		x = firstNum+2;
		for (;x<secondNum; x=x+2){
		sum=sum+x;
		}
	}
	else if (firstNum%2!=0 and firstNum>=0 and secondNum>=0) { 
		x = firstNum+1;
		for (;x<secondNum; x=x+2){
		sum=sum+x;
		}
	}
	else {
		cout << "Negative numbers are not natural numbers!" << endl;	
	}
	
	return sum;	
}

//b. Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value 

int sumOddNumbers(int firstNum, int secondNum){
	int x,sum;
	sum = 0;
	if (firstNum%2!=0 and firstNum>=0 and secondNum>=0){
		x = firstNum+2;
		for (;x<secondNum; x=x+2){
		sum=sum+x;
		}
	}
	else if (firstNum%2==0 and firstNum>=0 and secondNum>=0) { 
		x = firstNum+1;
		for (;x<secondNum; x=x+2){
		sum=sum+x;
		}
	}
	else {
		cout << "Negative numbers are not natural numbers!" << endl;	
	}
	
	return sum;	
}

//c. Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value.

int sumSquareEvenNumbers(int firstNum, int secondNum){
	int x,sum;
	sum = 0;
	if (firstNum%2==0 and firstNum>=0 and secondNum>=0){
		x = firstNum+2;
		while (x<secondNum){
		sum=sum+x*x;
		x=x+2;
		}
	}
	else if (firstNum%2!=0 and firstNum>=0 and secondNum>=0) { 
		x = firstNum+1;
		while (x<secondNum){
		sum=sum+x*x;
		x=x+2;
		}
	}
	else {
		cout << "Negative numbers are not natural numbers!" << endl;	
	}
	
	return sum;	
}


  
//d. Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value.  

int sumSquareOddNumbers(int firstNum, int secondNum){
	int x,sum;
	sum = 0;
	if (firstNum%2!=0 and firstNum>=0 and secondNum>=0){
		x = firstNum+2;
		while (x<secondNum){
		sum=sum+x*x;
		x=x+2;
		}
	}
	else if (firstNum%2==0 and firstNum>=0 and secondNum>=0) { 
		x = firstNum+1;
		while (x<secondNum){
		sum=sum+x*x;
		x=x+2;
		}
	}
	else {
		cout << "Negative numbers are not natural numbers!" << endl;	
	}

	return sum;
}

int main(){

	int a1,a2,a3,a4,b,c;
	
	cout << "Enter two natural numbers :" << endl;
	cin >> b >> c;
	
	a1 = sumEvenNumbers(b,c);
	
	if (a1>0){
		cout << "Sum of all even numbers between your numbers is "<< a1 << endl;
	}
	
	a2 = sumOddNumbers(b,c);
	
	if (a2>0){
		cout << "Sum of all odd numbers between your numbers is "<< a2 << endl;
	}

	a3 = sumSquareEvenNumbers(b,c);
	
	if (a3>0){
		cout << "Sum of square of all even numbers between your numbers is "<< a3 << endl;
	}
	
	a4 = sumSquareOddNumbers(b,c);
	
	if (a4>0){
		cout << "Sum of square of all odd numbers between your numbers is "<< a4 << endl;
	}

	return 0;
}
