#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout << "Cost of green and purple balloons: $";
    int cost;
    cin >> cost;

// first problem solved

int i=0;
cout << "Was the prooblem solved(0/1):";
int ans;
cin >> ans;

if (ans == 1) {
    int j = i +1 ;
    cout << "yes" <<endl;
    cout << "green balloons" << j;
}
else {
    cout << "no";
}
// second problem solved
    return 0;
}