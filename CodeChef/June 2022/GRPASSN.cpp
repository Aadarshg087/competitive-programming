#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 2, 4, 34, 22, 4, 2, 1, 4, 50, 51, 54, 3, 2, 4};
    int Size = sizeof(arr) / sizeof(arr[0]);
    cout << Size <<endl;;
    int search = 51;
    int k=0;
    for (int i = 0; i < Size; i++)
    {
        if (arr[i] == search)
        {
            cout << i << endl;
            break;
        }
        else
            k=1;
    }
    if (k=1)
    {
        cout<<"Not found"<<endl;
    }
    

    return 0;
}