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
    cout<<"Ingrese el nombre del corredor"<<endl;
    getline(cin, temp.nombre);
    //cout<<"El nombre del corredor es "<<temp.nombre<<endl;

    return 0;
}
