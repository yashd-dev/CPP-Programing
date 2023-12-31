// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.The digits are ordered from most significant to least significant in left - to - right order.The large integer does not contain any leading 0's. Increment the large integer by one and return the resulting array of digits.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Digit:";
    cin >> n;
    n += 1;
    // Get all digits in an array
    int num_digits = 0;
    int temp = n;
    while (temp)
    {
        num_digits++;
        temp /= 10;

        int arr[num_digits];
        for (int i = 0; i < num_digits; i++)
        {
            arr[i] = n % 10;
            n /= 10;
        }
        for (int i = num_digits - 1; i > -1; i--)
        {
            cout << arr[i] << " ";
        }

        return 0;
    }