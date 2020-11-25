#include <QCoreApplication>
#include<iostream>
using namespace std;
   int main()
    {
     int array[5],i;
     int *pointer=array;
     cout << "Enter 5 integer numbers separating by space" << endl;
         for (int counter = 0; counter < 5; counter++) {
             cin >> *(pointer + counter);
         }
         cout << "\n" << endl;

     cout<<"Your numbers are:\n";
     for(i=0;i<5;i++)
        cout<<array[i]<<endl;

     return 0;

    }
