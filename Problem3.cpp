#include <algorithm>
#include <iostream>

using namespace std;
int array_size = 10;
int* array = new int[array_size];
//int array[10]; int array_size;
int sort()
{
    for (int i = 0; i < array_size; ++i)
      {
                int min_index = i;
                for (int next_index = i + 1; next_index < array_size; next_index++) {
                    if (array[next_index] < array[min_index])
                        min_index = next_index;
                }
       // cout << array[i] << " ";
        swap(array[i], array[min_index]);
          }
          cout << "The sorted array is ";
          for (int counter = 0; counter < 10; ++counter)
              cout << array[counter] << "\t";
   return 0;
}


int main(){
    //int array[10];


        cout << "Input 10 integers" << endl;
        for (int counter = 0; counter < 10; counter++) {
            cout << "Array [" << counter << "]" << endl;
            cin >> array[counter];
        }
        sort();

    return 0;
}

