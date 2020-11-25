#include <iostream>

using namespace std;

int * sort(int * array, int size)
{
    int * a  = array;
    int x;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
        {
          if(a[i]<array[j])
          {
              x=a[i];
              a[i]=array[j];
              array[j]=x;
          }
        }
    return a;
}
int main()
{
    int array [10] = { 16, 2, 77, 40, 11,15,12,20,10,8 };
    sort(array,10);
    for(int i=0;i<10;i++)
        std::cout<<array[i]<<" ";
    return 0;
}
