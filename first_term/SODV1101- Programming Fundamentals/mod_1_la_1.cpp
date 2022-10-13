/*
Write a program that asks the user to enter their name, then prints a greeting using their name.

1.	Print the following message: “What is your name?”
2.	Read the name the user enters.
3.	Print the following message: “What is your age?”
4.	Read the user’s age as an integer.
5.	Print a greeting in the following format: “Hello NAME (AGE)!”. Replace NAME and AGE with the values retrieved from the user.

Sample Input/Output:

What is your name?
Alex Whatmore
What is your age?
40
Hello Alex Whatmore (40)!
*/

/*This program will ask the user to enter their name, then prints a greeting using their name*/
#include <iostream>
using namespace std;

string fullName;
int age;

int main() {
  cout << "What is your name?\n";
  getline(cin,fullName);
  
  cout << "What is your age?\n";
  cin >> age;

  cout << "Hello " + fullName + " (" << age << ")!";
}