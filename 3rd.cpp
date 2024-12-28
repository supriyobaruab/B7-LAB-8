#include <iostream>
using namespace std;

void sort()
{
    int element[10] = {3, 1, 2, 5, 7, 9, 4, 8, 6, 10};
    int size = sizeof(element) / sizeof(element[0]);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int temp;
            if (element[j] < element[i])
            {
                temp = element[j];
                element[j] = element[i];
                element[i] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << element[i] << " ";
    }
}
int main()
{
    sort();
    return 0;
}