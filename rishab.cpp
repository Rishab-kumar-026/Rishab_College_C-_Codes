#include <iostream>
using namespace std;
int main()
{
    int arr[5], i, number;
    cout << "Enter the array elements here: ";
    for (i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number you want to insert into the array: ";
    cin >> number;
    // Inserting the number into the array at index 3
    arr[3] = number;
    arr[4] = 45;
    cout << "The new array is : \n";
    for (i = 0; i < 5; i++) // Note: changed loop condition to 4
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
