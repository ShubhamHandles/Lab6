//Q.3.MINIMUM by value and by reference.

#include<iostream>
using namespace std;

/*
Write a program with a function that takes two int parameters, finds the minimum, then returns the minimum. 
*/
int COMPARE1(int x, int y){
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
Goal is the same as above, but this time, the function that finds the minimum should be void, and takes a third, pass by reference parameter; then puts the minimum in that. 
*/
void COMPARE2(int x, int y, int &z){
			z = COMPARE1(x,y);
}


/*
The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum. 
*/
int main(){
			int a,b,c,d;
			cout << "Enter two numbers: " << endl;
			cin >> a >> b;

			c = COMPARE1(a,b); //y = f(x)
			cout << "The minimum between the two number is : " << c << endl;
			
			COMPARE2(a,b,d);
			cout << "The minimum between the two number is : " << d << endl;
			
			return 0;
}
