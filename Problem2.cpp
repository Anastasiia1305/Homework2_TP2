#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
  int arr[10];
  int mode[10][2];
   cout<<"Enter 10 integer values\n";
  for(int l=0;l<10;l++) {
     cout<<"value "<<l<<":";cin>>arr[l];

}

 int i,j,temp;

 for(i=0;i<10;i++)
  for(j=9;j>i;j--)
     if(arr[j]<arr[j-1]) {
         int temp=arr[j];
         arr[j]=arr[j-1];
         arr[j-1]=temp;
}
  cout<<"Max="<<arr[9]<<"\nMin="<<arr[0];
  cout<<"\n";
 for(i=0;i<2;i++)
   for(j=0;j<10;j++)mode[j][i]=0;
     mode[0][0]=1;

 for(i=0;i<10;i++)
  for(j=0;j<10;j++)
   if(arr[i]==arr[j+1]) {++mode[i][0];mode[i][1]=arr[i];}

int frequency;
int k=0;
frequency=mode[0][0];
   for(j=0;j<10;j++)
    if(frequency<mode[j][0]){frequency=mode[j][0];k=j;}

  cout<<"The most occurring item:"<<mode[k][1]<<"\n";
  cout<<"It occurs "<<frequency<<" times.";
  cout<<"\n";
  system("PAUSE");

  return EXIT_SUCCESS;
}
