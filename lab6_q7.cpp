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

char toUpper(char ch){
	return ch-32;
}
	
char toLower(char ch){
	return ch+32;
}


int main(){
	
	char cha;

	cout << "Enter a character to the change case : " << endl;
	cin >> cha;

	if(cha>='A' &&  cha<='Z'){
		cout << toLower(cha);
	}
  
	else if(cha>='a' && cha<='z'){
		cout << toUpper(cha);
	}
	cout << endl;
	
	return 0;
	
}
