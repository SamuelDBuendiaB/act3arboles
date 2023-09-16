#include <iostream>
#include <conio.h>

using namespace std;

struct nodo
{
    int numero;
    nodo * izquierda;
    nodo * derecha;
};

nodo * arbol = NULL;
void menu();

int main(){

menu();
getch();
}


nodo *crear(int n){
    nodo *nuevo= new nodo();

    nuevo->numero=n;
    nuevo ->derecha=NULL;
    nuevo ->izquierda=NULL;

    return nuevo;
}


void ingresar( nodo *arbol ,int n){

if (arbol == NULL)
{
    nodo * nuevo = crear(n);
    arbol = nuevo;
}else
{
    int raiz = arbol->numero;

    if (n < raiz)
    {
        ingresar(arbol->izquierda,n);
    }else
    {
        ingresar(arbol->derecha,n);
    }
    
    
}

}

void menu(){
int x, numero;

cout<<"Ingrese la cantidad de datos"<<endl;
cin>>x;

for (int i = 0; i < x; i++)
{
    cout<<"Ingresar numero "<<endl;
    cin>>numero;
}
cout<<"datos ingresados";
}