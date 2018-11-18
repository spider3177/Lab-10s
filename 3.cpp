/* 3.  Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.*/
//first include the library
#include<iostream>
using namespace std;
class rectangle{
	public:
		float len;
		float bre;
		float area();
		float perimeter();
};

//
float rectangle::area()
{return len*bre;}

float rectangle::perimeter()
{return 2*(len+bre);}

int main()
{	rectangle rect1;
	rectangle rect2;
	cout<<"give length and breadth of first rectangle"<<endl;
	cin>>rect1.len;
	cin>>rect1.bre;
	cout<<"give length and breadth of second rectangle"<<endl;	
	cin>>rect2.len;
	cin>>rect2.bre;
	cout<<"area of first rectangle is  "<<rect1.area()<<endl;
	cout<<"area of second rectangle is  "<<rect2.area()<<endl;
	if(rect1.area()>rect2.area())
		cout<<"rectangle 1 has bigger area   "<<endl;
	else if(rect1.area()<rect2.area())	
		cout<<"rectangle 2 has bigger area   "<<endl;
	if(rect1.perimeter()>rect2.perimeter())
		cout<<"rectangle 1 has bigger perimeter   "<<endl;
	else if(rect1.perimeter()<rect2.perimeter())	
		cout<<"rectangle 2 has bigger perimeter   "<<endl;
return 0;
}

