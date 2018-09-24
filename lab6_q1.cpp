/*
Q.1.Tax Rate Calculation using Functions 
a.Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. 
Choose an appropriate name for this function.
b.Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. 
Choose an appropriate name for this function.
c.Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. 
Choose an appropriate name for this function.
d.Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. 
Your program should call the functions listed above.
e.Pseudocode and Indentation must be present. 
*/

#include<iostream>
using namespace std;

//a.Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module.
void taxInputs(int &unitCst, int &units, int &taxRt){
            cout << "Enter unit cost, units and tax rate(%) in the order :" << endl;
            cin >> unitCst >> units >> taxRt;
}

//b.Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. 
void taxCal(int unitCst, int units, int taxRt, int &salesTx, int &totDue){
            salesTx = (unitCst*units*taxRt)/100;
            totDue = salesTx+(units*unitCst);
}

//c.Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format.
void taxOutput(int unitCst, int units, int taxRt, int salesTx, int totDue){
            cout << "Your unit cost is : " << unitCst << endl;
            cout << "Your number of units are : " << units << endl;
            cout << "Your tax rate is : " << taxRt << "%" << endl;
            cout << "Your sales tax is : " << salesTx << endl;
            cout << "Your total bill is : " << totDue << endl;
}

int main(){
            cout << "Welcome to the biller!" << endl;

  //d.Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.
            int unitCost, unitsPurch, taxRate, salesTax, totalDue;
  
            taxInputs(unitCost, unitsPurch, taxRate);
            taxCal(unitCost, unitsPurch, taxRate, salesTax, totalDue);
            taxOutput(unitCost, unitsPurch, taxRate, salesTax, totalDue);
  
            return 0;
}



