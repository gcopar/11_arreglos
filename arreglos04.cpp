//NOMBRE: Gustavo Mario de la Cruz Copa Romero

#include <iostream>
using namespace std;

void multiplos(int cant, int numero, int multi[]){
    int mult;
    for (int i = 0; i < cant; i++)
    {
        mult = (i+1)*numero;
        multi[i] = mult;
    }
}

int main(){
    int n, num;
    cout<<"Ingresa la cantidad de multiplos de un numero: "; cin>>n;
    cout<<"Ingrese el numero al que quiere hallar sus multiplos: "; cin>>num;
    int multi[n];

    multiplos(n, num, multi);
    cout<<"\nLos multiplos del numero "<<num<<" son: "<<endl;

    for (int i = 0; i < n; i++)
    {
        if (i < (n -1))
        {
            cout<<multi[i]<<", ";
        }else{
            cout<<multi[i]<<endl;
        }
    }
    
    return 0;
}
