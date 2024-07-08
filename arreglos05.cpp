//NOMBRE: Gustavo Mario de la Cruz Copa Romero

#include <iostream>
using namespace std;

int main(){
    int cFP, cPG, mayor, ccomun = 0;

    cout<<"INGRESE EL NOMBRE DE LOS ALUMNOS: "<<endl;

    cout<<"\t\nAlumnos del curso FP:"<<endl;
    cout<<"\tIngresa la cantidad de alumnos de FP: "; cin>>cFP;
    string FP[cFP];
    cout<<"\tIngresa los nombres: "<<endl;
    for (int i = 0; i < cFP; i++)
    {
        cout<<"\t";
        cin>>FP[i];
    }

    cout<<"\nAlumnos del curso PG:"<<endl;
    cout<<"\tIngresa la cantidad de alumnos de PG: "; cin>>cPG;
    string PG[cPG];
    cout<<"\tIngresa los nombres: "<<endl;
    for (int i = 0; i < cPG; i++)
    {
        cout<<"\t";
        cin>>PG[i];
    }
    
    string AC[cFP];
    for (int i = 0; i < cPG; i++)
    {
        for (int j = 0; j < cFP; j++)
        {
            if (FP[j] == PG[i])
            {
                AC[ccomun] = PG[i];
                ccomun++;
            }
        }
    }
    cout<<"\nALUMNOS EN COMUN:"<<endl;
    cout<<"\tNumero de alumnos en comun: "<<ccomun<<endl;
    cout<<"\tLista de los alumnos en comun:"<<endl;
    for (int i = 0; i < ccomun; i++)
    {
        cout<<"\t"<<AC[i]<<endl;
    }
}