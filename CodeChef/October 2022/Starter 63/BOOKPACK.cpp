#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int booksPerShelves, Shelves, booksPerBox;
        cin >> Shelves >> booksPerShelves >> booksPerBox;
        int boxesPerShelves = booksPerShelves / booksPerBox;
        int remainder = booksPerShelves % booksPerBox;
        if (remainder != 0)
        {
            remainder = 0;
            cout << (boxesPerShelves * Shelves) + (Shelves) << endl;
        }
        else
        {
            cout << (boxesPerShelves * Shelves) << endl;
        }
    }

    return 0;
}