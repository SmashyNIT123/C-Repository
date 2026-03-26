#include<iostream>
using namespace std;
#include<math.h>
#include<ctype.h>
int main(){
    //Area of triangle using herons formula
   /* float a,b,c,sum,area;
    cout<<"Enter the side of triangle :";
    cin>>a>>b>>c;
    sum = (a+b+c)/2;
    area = sqrt(sum*(sum-a)*(sum-b)*(sum-c));
    cout<<"Resulting area is :"<<area;
    return 0;*/

    //Distance between two points
    
    /*int x1,y1,x2,y2,dis;
    cout<<"Enter two co-ordinates :";
    cin>>x1>>y1>>x2>>y2;
    dis = sqrt((x1*x1-x2*x2)-(y1*y1-y2*y2));
    cout<<"Distance between two point is :"<<dis;*/

    //Algebric operation 
    /*
    float num1,num2;
    cout<<"Enter ant two number :";
    cin>>num1>>num2;
    cout<<"Addition is :"<<num1+num2;
    cout<<"Subtraction is :"<<num1-num2;
    cout<<"Multiplication is :"<<num1*num2;
    cout<<"Dvision is:"<<num1/num2;
    */

    //Mathmatical operation on two floating numbers
    /*float num1,num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    cout.precision(2);
    cout<<"Addition is :"<<num1+num2<<endl;
    cout<<"Subtraction is :"<<num1-num2<<endl;
    cout<<"Multiplay is :"<<num1*num2<<endl;
    cout<<"Divison is :"<<num1/num2;*/

    //Unary operator
    /*int num;
    cout<<"Enter the number :";
    cin>>num;
    cout<<"Value before prefix :"<<num<<endl;
    cout<<"Value on prefix"<<++num<<endl;
    cout<<"Value on postfix :"<<num++;*/

    //Find largest number
    /*int num1,num2,large;
    cout<<"Enter any two number:";
    cin>>num1>>num2;
    large = num1>num2?num1:num2;
    cout<<"Laeger number is :"<<large;*/
    //Find largest number number from three input
    /*int num1,num2,num3,large;
    cout<<"Enter three input number:";
    cin>>num1>>num2>>num3;
    large=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    cout<<"Largest number is :"<<large;*/

    //  Calculate area of circle
    /*float radius,area,perimeter;
    cout<<"Enter the radius:";
    cin>>radius;
    area = 3.14 *radius*radius;
    perimeter=2*3.14*radius;
    cout<<"Area of the circle is :"<<area<<endl;
    cout<<"Perimeter of circle is :"<<perimeter;*/

    //Write a program to print ASCII value
    /*char ch;
    cout<<"Enter the charcter:";
    cin>>ch;
    cout<<"ASCII value of ch is :"<<int(ch);*/
    

    //  Write a program to print char 
    /*int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<"Value of char is :"<<char(num);*/

    //Write  a function to take input in upper and outut in lowercase

    /*char ch;
    cout<<"Enter the charcater :";
    cin>>ch;
    cout<<"Output is :"<<(char)tolower(ch);*/

    //Write a program to print the digit at one's place of number

    /*int num,ones_dig;
    cout<<"Enter the number :";
    cin>>num;
    ones_dig = num%10;
    int tens = num % 100;
    int hun = num % 1000;
    cout<<"Digit place is :"<<ones_dig<<endl;
    cout<<"Digit place is :"<<tens<<endl;
        cout<<"Digit place is :"<<hun<<endl;*/

//Write a program to swap two numbers;
int num1,num2,temp;
cout<<"Enter two number :";
cin>>num1>>num2;
//Logic here
temp = num1;
num1=num2;
num2=temp;
cout<<"Swapped number is :"<<temp;
}