#include <iostream>
#include <cmath>
using namespace std;
int vbucks;
double jimmy;
double john;
int main() {
    //Shuzz Prickuzz invested in vbucks and it went up. He started at 3 dollars, and the value went up to the 9th power. How much is his vbucks investment worth?
    vbucks = pow(3, 9);
    cout << "Shuzz now has " << vbucks << " vbucks" << endl;
    //Jimmy John is building a house. The length of the board he needs is the square root of 1923. What is the length of the board?
    jimmy = sqrt(1923);
    cout << "Jimmy needs a board that is " << jimmy << " ft long" << endl;
    //Jimmy John the second double Jr. has a 2.983452309809 and he needs the floor of it. What is the floor?
    john = floor(2.983452309809);
    cout << "The floor is " << john << endl;
    return 0;
}
