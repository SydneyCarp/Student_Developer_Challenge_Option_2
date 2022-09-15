#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// This function reverses a string
string reverseString(string original){
    reverse(original.begin(), original.end());
    return original;
}

// This function returns the largest number out of 3 integers
int largestNumber(int num1, int num2, int num3){
    if((num1 > num2) && (num1 > num3)){
        return num1;
    } else if(num2 > num3){
        return num2;
    } else{
        return num3;
    }
}

// This function returns the factorial of a positive integer
int factorial(int factorialNum){
    if(factorialNum <= 0){
        return 0;
    }
    if(factorialNum == 1){
        return 1;
    } else{
        return factorialNum * factorial(factorialNum-1);
    }
}

// This function returns the Nth entry of the fibonacci sequence
int fibonacci(int fibonacciNum){
    if(fibonacciNum <= 0){
        return 0;
    }
    if(fibonacciNum == 1) {
        return 1;
    }else{
        return fibonacci(fibonacciNum-1) + fibonacci(fibonacciNum-2);
    }
}

int main() {

    // Section 1
    cout << "Section 1:" << endl;
    string input = " ";
    cout << "Enter a string ";
    getline(cin, input);
    cout << "Original input: " << input << endl;
    input = reverseString(input);
    cout << "Reversed input: " << input << endl << endl;

    // Section 2
    cout << "Section 2:" << endl;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Enter 3 numbers: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin.ignore();
    cout << "The largest number is " << largestNumber(num1, num2, num3) << endl << endl;

    // Section 3
    cout << "Section 3" << endl;
    int factorialNum = 0;
    cout << "Enter a positive number: ";
    cin >> factorialNum;
    cin.ignore();
    cout << "The factorial of " << factorialNum << " is " << factorial(factorialNum) << endl << endl;

    // Section 4
    cout << "Section 4" << endl;
    int fibonacciNum = 0;
    cout << "Enter a positive number: ";
    cin >> fibonacciNum;
    cin.ignore();
    cout << "The " << fibonacciNum << " number of the fibonacci sequence is " << fibonacci(fibonacciNum) << endl;

    return 0;
}
