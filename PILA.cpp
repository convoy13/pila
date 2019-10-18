#include <iostream>
#include<conio.h>
using namespace std;
struct nodo{
    int nro;
    struct nodo *sgte;
};
void menu();
 int main()
{
	 
	int nodo,p,*ptrPila;
//	ptrPila=p; 
    ptrPila = NULL;
    int dato;
    int op;
    int x ;
     do
    {
        cin>> op;
         switch(op){
            case 1:
                 cout<< "\n NUMERO A APILAR: "; cin>> dato;
                 
                 cout<<"\n\n\t\tNumero " << dato << " apilado...\n\n";
            break;
            case 2:
                 
                 cout<<"\n\n\t\tNumero "<< x <<" desapilado...\n\n";
            break; 
            case 3:
                  cout << "\n\n MOSTRANDO PILA\n\n";
                 
                    cout<<"\n\n\tPila vacia..!"<<endl;
            break;
            case 4:
                  
                 cout<<"\n\n\t\tPila eliminadpa...\n\n";
            break;
           }
         cout<<endl<<endl;
        system("pause");  system("cls");
    }while(op!=5);
    return 0;
}

void push( ptrPila &p, int valor ){
     ptrPila aux;
     aux = new(struct nodo);  // apuntamos al nuevo nodo creado
     aux->nro = valor;
     aux->sgte = p ;
     p = aux ;
}

int pop( ptrPila &p ){
     int num ;
     ptrPila aux;
     aux = p ;
     num = aux->nro;
     p = aux->sgte ;
     delete(aux);
     return num;
}

void mostrar_pila( ptrPila p ){
     ptrPila aux;
     aux = p;     // apunta al inicio de la lista
     while( aux !=NULL ){
            cout<<"\t"<< aux->nro <<endl;
            aux = aux->sgte;
     }    
}

void destruir_pila( ptrPila &p)
{
     ptrPila aux;
     
     while( p != NULL)
     {
           aux = p;
           p = aux->sgte;
           delete(aux);
     }
}

void menu()
{
    cout<<"\n\t IMPLEMENTACION DE PILAS EN C++\n\n";
    cout<<" 1. APILAR                                "<<endl;
    cout<<" 2. DESAPILAR                             "<<endl;
    cout<<" 3. MOSTRAR PILA                          "<<endl;
    cout<<" 4. DESTRUIR PILA                         "<<endl;
    cout<<" 5. SALIR                                 "<<endl;
 
    cout<<"\n INGRESE OPCION: ";
}
