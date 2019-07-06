/*
This is a simple program that will declare and output two variables
Author: Zachary Murphy
Date Modified Last: 7/6/2019
*/

//required statments
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	//declarations
	int balance = 1000;
	string myName = "Zachary Murphy";

	//output
	cout << "Hello my name is " << myName << " my current bank account balance is $" << balance << ". \n";

	return 0;
}