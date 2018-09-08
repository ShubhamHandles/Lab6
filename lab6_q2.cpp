//Q.2.SUM by value and by reference.

#include<iostream>
using namespace std;

/*
Write a program with a function that takes two int parameters, adds them together, then returns the sum. 
*/
int ADD1(int x, int y){
			int sum = x+y;
			return sum;
}


/*
Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that. 
*/
void ADD2(int x, int y, int &z){
			z = ADD1(x,y);
}



/*
The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/	
int main(){
			int a,b,c,d;
			cout << "Enter two numbers: " << endl;
			cin >> a >> b;
			
			c = ADD1(a,b); // y = f(x)
			cout << "Sum = " << c << endl;	

			ADD2(a,b,d); // f(x)
			cout << "Sum = " << d << endl;
			
			return 0;
}

