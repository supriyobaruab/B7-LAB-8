#include <iostream>
using namespace std;

void selectItems(int items[][2], int itemCount, int bagCapacity, int &totalWeight, int &totalPrice)
{
    cout << "Selecting items to maximize value:\n";
    for (int i = 0; i < itemCount; i++)
    {
        if (totalWeight + items[i][0] <= bagCapacity)
        {
            totalWeight += items[i][0];
            totalPrice += items[i][1];
            cout << "Item " << i + 1 << ": " << items[i][0] << "kg, " << items[i][1] << "tk\n";
        }
    }
}

void calculateNotes(int amount)
{
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int noteCount = sizeof(notes) / sizeof(notes[0]);

    cout << "\nPaying " << amount << "tk with minimum notes:\n";
    for (int i = 0; i < noteCount; i++)
    {
        if (amount >= notes[i])
        {
            int count = amount / notes[i];
            cout << notes[i] << "tk: " << count << " notes\n";
            amount %= notes[i];
        }
    }
}

int main()
{
    int items[4][2] = {{3, 470}, {2, 230}, {3, 360}, {5, 500}};
    int bagCapacity = 10;
    int totalWeight = 0, totalPrice = 0;

    selectItems(items, 4, bagCapacity, totalWeight, totalPrice);

    cout << "Total weight: " << totalWeight << "kg\n";
    cout << "Total price: " << totalPrice << "tk\n";
    calculateNotes(totalPrice);

    return 0;
}
