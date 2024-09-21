#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

#define pi 3.141592
long double area, radius;
char choice;
long double circle_area(){
    area = (pi*pow(radius,2));
    return area;
}

int main(){
    beginning:
    system("cls");
    cout << "Insira o valor do raio: ";
    cin >> radius;
    cout << "Area = " << circle_area() << endl;
    cout << "Deseja fazer outro calculo? [s/n]: ";
    cin >> choice;
    if (choice == 's' or choice =='S'){
        goto beginning;
    }
    return 0;
}
