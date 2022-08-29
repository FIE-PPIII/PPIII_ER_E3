#include <iostream>
#define CORREDORES 5

using namespace std;

typedef struct corredor
{
    int tiempo;
    string nombre;
} Corredor;

Corredor ingresoCorredor();

int main()
{
    Corredor pri;
    Corredor seg;
    Corredor ult;
    float prom = 0;
    Corredor temp = ingresoCorredor();
    pri = temp;
    seg = temp;
    ult = temp;
    prom = temp.tiempo;
    for (int i = 0; i < CORREDORES - 1; i++){
        temp = ingresoCorredor();
        if (temp.tiempo < pri.tiempo){
            seg = pri;
            pri = temp;
        } else if (temp.tiempo < seg.tiempo)
            seg = temp;
        else if (temp.tiempo > ult.tiempo)
            ult = temp;
        prom += temp.tiempo;
    }
    prom = prom / CORREDORES;

    cout<<"Primero: "<<pri.nombre<<" ("<<pri.tiempo<<")"<<endl;
    cout<<"Segundo: "<<seg.nombre<<" ("<<seg.tiempo<<")"<<endl;
    cout<<"Ultimo: "<<ult.nombre<<" ("<<ult.tiempo<<")"<<endl;
    cout<<"Promedio: "<<prom<<endl;

    return 0;
}

Corredor ingresoCorredor()
{
    Corredor temp;
    cout<<"Ingrese el tiempo del corredor: ";
    cin>>temp.tiempo;
    cout<<"Ingrese el nombre del corredor: ";
    getline(cin >> ws, temp.nombre);
    return temp;
}