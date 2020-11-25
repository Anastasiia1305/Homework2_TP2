#include <QCoreApplication>

#include <iostream>
using namespace std;
char yes;
int add(int, int);
int substract(int, int);
int multiply(int, int);
int divide(int, int);
int module(int, int);
void MainMenu()
{
    cout << "MENU of CALCULATOR" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Module" << endl;

}
int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}

int module(int a, int b)
{
    return a % b;
}


void calculator(int a, int b);
int main()
{
    do {
    MainMenu();
    int a, b;
    int choose;


    cout << "Enter the number of menu=" << endl;
    cin >> choose;
           cout << "Enter two numbers:" << endl;
           cin >> a >> b;

           switch(choose) {
               case 1:
                   cout << "\nSum of two numbers  is= " << add(a, b) << "\n";
                   break;
              case 2:
                    cout << "\nSubtraction of two numbers is=" <<substract(a,b)<<"\n";
                  break;
              case 3:
                   cout << "\nMultiplication of two numbers is= "<< multiply(a,b)<<"\n";
                  break;
              case 4:
                   cout << "\nDivision of two numbers is= "<<divide(a,b)<<"\n";
              break;
          case 5:
                   cout<<"\nModule of two numbers is="<<module (a,b)<<"\n";
               break;


                       }
           cout << "Do you want to continue? Press y" << endl;
           cin >> yes;

           }
           while (yes == 'y' || yes == 'Y');

}





