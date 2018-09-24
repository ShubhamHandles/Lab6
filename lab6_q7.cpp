/*
Q.7.UpperCase and LowerCase
a.Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
b.Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
c.Write a main program, that calls the above function based on the input of the user.
If the user enters a lower case character, it should automatically detect it and call toUpper() 
and display the upper case value and vice-versa. 
*/

#include<iostream>
using namespace std;

//a.Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.

char toUpper(char ch){
	return ch-32;
}

//b.Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.

char toLower(char ch){
	return ch+32;
}

//c.Write a main program, that calls the above function based on the input of the user

int main(){
	
	char c;

	cout << "Enter a character to change the case : " << endl;
	cin >> c;

	if(c>='A' and  c<='Z'){
		cout << toLower(c);
	}
  
	else if(c>='a' and c<='z'){
		cout << toUpper(c);
	}
	
	else {
		cout << "Your input is not a character!";
	}
	cout << endl;
	
	return 0;
	
}
