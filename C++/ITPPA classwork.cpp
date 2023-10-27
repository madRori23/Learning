/* 19/05 Classwork
#include <iostream>
using namespace std;

int main() {
    //Prompt user to enter length of rectangle
    cout << "Enter the length: ";
    double length;
    cin >> length;

    //Prompt user to enter width of rectangle
    cout << "Enter the width: ";
    double width;
    cin >> width;

    // Calculate the perimeter
    double perimeter =  2 * (length + width);
    cout << "Perimeter of the rectangle is: " << perimeter << endl;

    //Calculate the area
    double area = length * width;
    cout << "Area of the rectangle is: " << area << endl;


    return 0;
} 

// 26/05 Classwork
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
   /* double weight;
    double lbs;
    cout << "Enter your weight in kg" <<endl;
    cin >> weight;
    
    lbs = weight * 2.2;
    cout << lbs << endl;
    
    cout << setprecision(4) << lbs;
    
   int x =25, y = 18;
    int temp = 30;
    char ch = 'A';
    
    x = x + 5;
    
    double payRate = 12.50;
    
    int firstNum =0;
    int tempNum =0;
    tempNum = firstNum;
    cout << "The value of x and y before the swap " << x <<" "<< y << "\n";
    int temp1;
    temp1 = x;
    x = y;
    y = temp1;
    
    cout << "The value of x and y after swap " << static_cast<float>(x) << " "  <<static_cast<float> (y) << endl;
    
    cout << "Converted x value " << setprecision(5)<< x << endl;
    cout << "Converted y value " << setprecision(5)<< y << endl;
    
    float result = x +12 / y - 18;
    cout << setprecision(5) << result;
    
    
    return 0;
} */