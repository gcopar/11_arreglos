//NOMBRE: Gustavo Mario de la Cruz Copa Romero

#include <iostream>
using namespace std;

int main(){
    int n, par=0, impar=0, numpar=0, numimpar=0;
    cout<<"Ingresa la cantidad de elementos del vector: "; cin>>n;
    int Num[n]; 

    for (int i = 1; i <= n; i++)
    {
        cin>>Num[i];
        
        if (Num[i] % 2 == 0){
            par++;
        }else{
            impar++;
        }  
    }

    int Pares[par], Impares[impar];

    for (int i = 1; i <= n; i++)
    {
        if (Num[i] % 2 == 0){
            numpar++;
            Pares[numpar]=Num[i];
        }else{
            numimpar++;
            Impares[numimpar]=Num[i];
        } 
    }

    cout<<"Numeros pares: "<<endl;
    for (int i = 1; i <= par; i++)
    {   
        cout<<Pares[i]<<endl;
    }

    cout<<"Numeros impares: "<<endl;
    for (int i = 1; i <= impar; i++)
    {   
        cout<<Impares[i]<<endl;
    }

    return 0;
}