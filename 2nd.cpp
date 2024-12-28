#include <iostream>
using namespace std;

void element(int n)
{
    int arr[10] = {1, 3, 7, 6, 5, 2, 7, 10, 9, 8};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            cout << "Found at index " << i;
            break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter a number to search in element :";
    cin >> n;
    element(n);

    return 0;
}