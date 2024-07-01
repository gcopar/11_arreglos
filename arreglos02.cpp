//NOMBRE: Gustavo Mario de la Cruz Copa Romero

#include <iostream>
using namespace std;

int main(){
    int n, par=0, impar=0, numpar;
    cout<<"Ingresa la cantidad de elementos del vector: "; cin>>n;
    int Num[n]; 
    int Pares[par];
    int Impares[impar];

    for (int i = 1; i <= n; i++)
    {
        cin>>Num[i];
        if (Num[i] % 2 == 0){
            par++;
            for (int j = 1; j <= par; j++)
            {
                numpar=Num[i];
                Pares[j]=numpar;
            }
        }else{
            impar++;
            for (int j = 1; j <= par; j++)
            {
                Impares[j]=Num[i];
            }
        }         
    }

    for (int i = 1; i < par; i++)
    {
        cout<<Pares[i]<<endl;
    }
    
    return 0;
}