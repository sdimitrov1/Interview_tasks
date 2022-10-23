// C++ implementation to find slope of a number
#include <bits/stdc++.h>

using namespace std;

// function to find slope of a number
int slopeOfNum(string num, int n)
{
    // to store slope of the given
    // number 'num'
    int slope = 0;

    // loop from the 2nd digit up to the 2nd last digit
    // of the given number 'num'
    for (int i = 1; i < n - 1; i++) {

        // if the digit is a maxima
        if (num[i] > num[i - 1] && num[i] > num[i + 1])
            slope++;

        // if the digit is a minima
        else if (num[i] < num[i - 1] && num[i] < num[i + 1])
            slope++;
    }

    // required slope
    return slope;
}

// Driver program to test above
int main()
{
    string num ;
    cout << "Please input a string: " << endl;
    cin >> num;
    int n = num.size();
    cout << "Slope = "
        << slopeOfNum(num, n) << endl;
    cout << "Lenght of array is: " << n  << endl;
    return 0;
}
