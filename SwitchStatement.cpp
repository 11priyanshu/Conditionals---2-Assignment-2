// Q.No - 1 (Write a program to count the minimum number of notes).

#include <iostream>
using namespace std;

int main() {
    int amount;
    int n1, n2, n5, n10, n20, n50, n100, n500;
    n1 = n2 = n5 = n10 = n20 = n50 = n100 = n500 = 0;

    cout << "Please Enter Your total Amount to find the notes: ";
    cin >> amount;

    switch (amount >= 500) {
        case true:
            n500 = amount / 500;
            amount -= n500 * 500;
            break;
    }

    switch (amount >= 100) {
        case true:
            n100 = amount / 100;
            amount -= n100 * 100;
            break;
    }

    switch (amount >= 50) {
        case true:
            n50 = amount / 50;
            amount -= n50 * 50;
            break;
    }

    switch (amount >= 20) {
        case true:
            n20 = amount / 20;
            amount -= n20 * 20;
            break;
    }

    switch (amount >= 10) {
        case true:
            n10 = amount / 10;
            amount -= n10 * 10;
            break;
    }

    switch (amount >= 5) {
        case true:
            n5 = amount / 5;
            amount -= n5 * 5;
            break;
    }

    switch (amount >= 2) {
        case true:
            n2 = amount / 2;
            amount -= n2 * 2;
            break;
    }

    int minimum;
    minimum = (n500 + n100 + n50 + n20 + n10 + n5 + n2);
    cout<<"Minimum No Of Notes : "<<minimum;
    

    return 0;
}
