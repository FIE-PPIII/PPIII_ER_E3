#include <iostream>

using namespace std;

typedef struct corredor
{
    int tiempo;
    string nombre;
} Corredor;

int main()
{
    Corredor temp;
    cout<<"Ingrese el nombre del corredor: ";
    getline(cin, temp.nombre);
    cout<<"Ingrese el tiempo del corredor: ";
    cin>>temp.tiempo;
    //cout<<temp.nombre<<" corrio durante "<<temp.tiempo<<" minutos."<<endl;

    return 0;
}
