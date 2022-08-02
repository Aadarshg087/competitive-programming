#include<iostream>
using namespace std;

int main(){ 
    int array[5]={1,2,3,4,5};
    int index=5;
    int element=90;
    int sizeOfArray=4;
    for (int i = sizeOfArray-1; i > index; i--)
    {
        array[i]=array[i-1];
    }
    array[index]=element;

    for (int i = 0; i <= 5; i++)
    {
        cout<<array[i]<<" ";
    }
    
    
    return 0;
}