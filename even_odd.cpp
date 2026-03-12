#include<iostream>
using namespace std;

int main () {
int number;
cout << "Type a number" << endl;
cin >> number;
if (number % 2 == 0) {
cout << "This number is even" << endl;
}
else if (number % 2 != 0) {
cout << "This number is odd" << endl;
}
}