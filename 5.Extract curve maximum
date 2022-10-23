#include <iostream>
using namespace std;

int maxElementIndex(double* arr, int size) {
    int max = arr[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    return index;
}

int main()
{

    int i, n, j;
    double arr[1000];
    double temp;

    cout << "Enter the number of elements in the array (upto 1000): ";
    cin >> n;
    if (n < 5)
    {
        cout << "Number should be greater or equal to 5";
        return 0;
    }
    cout << endl;

    // Store number entered by the user
    for (i = 0; i < n; ++i)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }
    int index = maxElementIndex(arr, n);


    int forward = 1;
    int backward = 0;
    int arr2[6] = {};
    int y = 0;
    int x = 6;
    // cout << arr[index] << "\t";
    while (forward + backward <= 5) {
        if (index - backward >= 0) {
            //cout << arr[index - backward] << '\t';
            arr2[y++] = arr[index - backward];
            backward++;


        }
        if (index + forward < n) {
            //cout << arr[index + forward] << '\t';
            arr2[y++] = arr[index + forward];
            forward++;

        }

    }

    cout << endl << "Number of elemts is: " << n;
    cout << endl;
    for (y = 0; y < x; y++) {
        cout << arr2[y] << '\t';
    }

    return 0;

}
