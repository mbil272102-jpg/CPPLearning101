/* 
Problem 2:

Enter cost of 3 items from the user (using float data type) - a pencil, a
pen and an eraser. You have to output the total cost of the items back to the user as
their bill.
(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced

*/

#include<iostream>
using namespace std;

int main()

{

   float pencil,eraser,pen;

   cout<<"Enter Price of pencil=";
   cin>>pencil;

   cout<<"Enter price of eraser=";
   cin>>eraser;

   cout<<"Enter price of pen=";
   cin>>pen;

   float total_cost=pencil+eraser+pen;

   cout<<"Total cost after 18% GST="<<(total_cost*18/100)+total_cost<<endl;

   return 0;

}

