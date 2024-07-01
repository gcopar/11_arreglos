//NOMBRE: Gustavo Mario de la Cruz Copa Romero

#include <iostream>
using namespace std;

int main(){
    int num, sum = 0, cant0 = 0;
    float porc0;

    cout<<"Ingrese la cantidad de elementos que desea tener en el vector: "; cin>>num;
    int A[num];
    for (int i = 1; i <= num; i++)
    {
        cin>>A[i];
        sum = sum + A[i];
        if (A[i] == 0)
        {
            cant0++;
        }
    }

    porc0 = (cant0 * 100) / num;

    cout<<"Sumatoria de todos los elementos es: "<<sum<<endl;;
    cout<<"Porcentaje de valores ceros ingresados es: "<<porc0<<"%"<<endl;
    
    return 0;
}