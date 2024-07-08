//NOMBRE: Gustavo Mario de la Cruz Copa Romero

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int menort = 42, TempMax[7], TempMin[7], dm, tempin;
    float TempMed;
    char dia[7] = {'L', 'M', 'm', 'J', 'V', 'S', 'D'}; //Tengo problemas con el string
    srand(time(0));

    for (int i = 0; i < 7; i++)
    {
        int temp1 = rand() % (42 + 1);
        int temp2 = rand() % (42 + 1);

        if (temp1 > temp2)
        {
            TempMax[i] = temp1;
            TempMin[i] = temp2;

        }else if (temp1 == temp2)
        {
            TempMax[i] = temp1;
            TempMin[i] = temp1;
        }else{
            TempMin[i] = temp1;
            TempMax[i] = temp2;
        }        
    }

    cout<<"TEMPERATURA MEDIA DE C/D DE LA SEMANA "<<endl;
    for (int i = 0; i < 7; i++)
    {
        TempMed = (TempMax[i]+TempMin[i])/2;
        cout<<"\tTemperatura media del "<<dia[i]<< " es: "<<TempMed<<endl;
    }

    cout<<"\nDIA CON MENOR TEMPERATURA: "<<endl;
    for (int i = 0; i < 7; i++)
    {
        if (TempMin[i] <= menort)
        {
            menort = TempMin[i];
            dm = i;
        }
    }
    cout<<"\tEl dia con menor temperatura es el "<<dia[dm]<<" con "<<menort<<" C"<<endl;

    cout<<"\nDIAS CON LA MISMA TEMPERATURA MAXIMA: "<<endl;
    cout<<"\tIngrese una temperara: "; cin>>tempin;
    for (int i = 0; i < 7; i++)
    {
        if (TempMax[i] == tempin)
        {
            cout<<"\n"<<dia[i]<<" con "<<TempMax[i]<<" C"<<endl;
            dm = 1;
        } else{
            dm = 0;
        }
    }

    if (dm == 0)
    {
        cout<<"\tNo se encontro un dia de la semana con la misma temperatura maxima que proporciono"<<endl;
    }
    
    return 0;
}
