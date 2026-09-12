/* Problem 1;

Write a c++ program to calculate the area of a square

*/

#include<iostream> // Pre-processor directive
using namespace std; // Standard Namespace
int main() // the main function;program execution starts

{ 
  float Side_1; // Declaring variable for first side
  float Side_2; // Declaring variable for second side

   cout<<"Enter first side=";// Telling user to enter 1st side
   cin>>Side_1;// Taking input from user for first side

   cout<<"Enter second side="; // Telling user to enter 2nd side
   cin>>Side_2; // Taking input from the user

   float Area=Side_1*Side_2; // declaring area variable and writing formula

   cout<<"Area of Square="<<Area<<endl;

   return 0;

}


