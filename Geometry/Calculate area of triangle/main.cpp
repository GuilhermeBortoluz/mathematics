#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

double area, base=0, n2=0, n3=0, h=0,repetir=1.0;
void menu(){
    cout << "Digite o valor da base do triangulo, se nao tiver esta medida digite 0" << endl;
    cin >> base;
    while (base <0){
        cout  << "Insira valor valido, nao sao aceitos numeros negativos" << endl;
        cin >> base;
    }
    cout << "Digite o lado 2, se nao tiver esta medida digite 0" << endl;
    cin >> n2;
    while ( n2<0){
        cout  << "Insira valor valido, nao sao aceitos numeros negativos" << endl;
        cin >> n2;
    }
    cout << "Digite o lado 3, se nao tiver esta medida digite 0" << endl;
    cin >> n3;
    while (n3 <0){
        cout  << "Insira valor valido, nao sao aceitos numeros negativos" << endl;
        cin >> n3;
    }
    cout << "Digite a altura do triangulo, se nao tiver esta medida digite 0" << endl;
    cin >> h;
    while (h <0){
        cout  << "Insira valor valido, nao sao aceitos numeros negativos" << endl;
        cin >> h;
    }
    }
bool test_triangulo(){
    if ((base+n2) > n3 && (base+n3) > n2 && (n2+n3) > base){
        return true;
    }
    else{
        cout << "Esse triangulo nao existe, insira novamente os valores" << endl;
        return false;
    };
}   
double equilatero(){
    area = ((pow(base,2))*pow(3.0,0.5))/4;
    return area;
}
double isosceles(){
    area = (base*h)/2;
    return area;
}
double heron(){
    area = sqrt(((base+n2+n3)/2)*(((base+n2+n3)/2)-base)*(((base+n2+n3)/2)-n2)*(((base+n2+n3)/2)-n3));
    return area;
}
int main(){
    system("cls");
    cout << "Bem vindo a calculadora de area de triangulo"<<endl;
    while (repetir==1)
    {
        menu();
        if (base!=0 && n2!=0 && n3!=0){
            while (test_triangulo() == false){
            menu();
            test_triangulo();
        }
        }
        
        if ((base==n2) && (n2==n3)){
            cout <<"Area = " << equilatero() << endl;
        }
        else if ((base!=0) && h!=0){

            cout << "Area = " << isosceles() << endl;

        }
        if (base!=0 && n2 !=0 && n3!=0 && (((base!=n2) && (base!=n3) and (n2!=n3)) && h==0))
        {
            cout << "Area = " << heron() << endl;

        }
        cout << "Digite 0 para para sair do programa, digite 1 para fazer outro calculo" << endl;
        cin >> repetir;
    }
    cout << "Ate a proxima" << endl;
    return 0;
}
