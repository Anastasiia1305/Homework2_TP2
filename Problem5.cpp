#include <QCoreApplication>
#include <iostream>
using namespace std;

int max_value(int);

int size;
int main()
{
    cout << "Enter number of data values:";
    cin >> size;
    max_value(size);
    return 0;
}

int max_value(int size)
{
    int array[size];

    for (int counter = 1; counter <= size; counter++) {
        cout << "Enter value " << counter << " : ";
        cin >> array[counter];
    }
    int max = array[1];
    for (int counter = 1; counter <= size; counter++) {
        if (max < array[counter]) {
            max = array[counter];
        }
    }
    int* pointer = &max;
    cout << "The maximum value is " << *pointer << endl;
    return 0;
}
