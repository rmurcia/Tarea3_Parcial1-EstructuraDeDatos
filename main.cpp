#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;

//trabaje con Franklin Hernandez, David Paz, Gerson Brito, Richard Trochez, Marcial Ordoñez, Erick Leveron, Randall Isaula y Oscar Padilla


//Agrega valor (dado) a mi_mapa (dado), en la llave dada
//Nota: mi_mapa es un apuntador, para usarlo se sugiere desrreferenciarlo con el operador *
void asignarValor(map<string,int> *mi_mapa, string llave,int valor)
{
    (*mi_mapa) [llave]= valor;//con los parentesis desreferenciamos el puntero de mi_mapa y asignamos el valor en la llave dada.
}

//Devuelve el valor asociado a la llave (dada) en mi_mapa (dado)
char obtenerValor(map<int,char> mi_mapa,int llave)
{
    return mi_mapa[llave];//devuelve lo que contiene mi_mapa en la posicion llave
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//  LLave     |   Valor
//----------------------------
//  1         |   "lunes"
//  2         |   "martes"
//  3         |   "miercoles"
//  4         |   "jueves"
//  5         |   "viernes"
//  6         |   "sabado"
//  7         |   "domingo"
map<string,int> obtenerSemana()
{
    map<string,int> dia;//creamos una nueva variable par de tipo string e int
    dia["lunes"]=1;//a cada posicion string asignamos el valor int que contendra
    dia["martes"]=2;
    dia["miercoles"]=3;
    dia["jueves"]=4;
    dia["viernes"]=5;
    dia["sabado"]=6;
    dia["domingo"]=7;
    return dia; //retornamos el dia

}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;//creamos una nueva variable que capturara la interseccion entre mi_set1 y mi_set2
    set<int> ::iterator i=mi_set1.begin();//creamos un iterador para recorrer la lista de mi_set1 desde el inicio
    while(i!=mi_set1.end())//se recorrera la lista hasta el final
    {
        set<int> ::iterator j=mi_set2.begin();//creamos un segundo iterador para recorrer la lista de mi_set2 desde el inicio
        while(j!=mi_set2.end())//se recorrera la lista hasta el final
        {
            if(*i!=*j)
            {
              //  si i es diferente de j no se hace nada
            }
            else//de lo contrario inserta el valor en mi_set3 creando la nueva lista de intersecciones
            {
                mi_set3.insert(*i);
            }
            j++;//j se suma de uno en uno
        }
        i++;//i se suma de uno en uno
    }
    return mi_set3;// retornamos el valor que contiene mi_set3

}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;//creamos una nueva variable que capturara los datos de mi_set1 y mi_set2
    set<int> ::iterator i=mi_set1.begin();//recorremos la primer lista mi_set1 desde el inicio
    while(i!=mi_set1.end())//se recorrera la lista hasta el final
    {
        mi_set3.insert(*i);//insertamos el valor de ese momento en mi_set3
        i++;//i se suma de uno en uno
    }
    set<int> ::iterator j=mi_set2.begin();//recorremos la primer lista mi_set2 desde el inicio
    while(j!=mi_set2.end())//se recorrera la lista hasta el final
    {
        mi_set3.insert(*j);//insertamos el valor de ese momento en mi_set3
        j++;//j se suma de uno en uno
    }
    return mi_set3;//retornamos la lista ya unida

}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    set<int> ::iterator i=mi_sub_set.begin();//recorremos la primer lista mi_sub_set desde el inicio
    int cont=0; //declaramos una variable contadora
    while(i!=mi_sub_set.end())//se recorrera la lista hasta el final
    {
        set<int>::iterator j=mi_set.begin();//recorremos la primer lista mi_set desde el inicio
        while(j!=mi_set.end())//se recorrera la lista hasta el final
        {
            if(*i==*j)//si lo que hay en la posicion i es lo mismo que hay en la posicion j al contador se le suma 1
            {
              cont++;//suma de uno en uno
            }
            j++;//j se suma de uno en uno
        }
        if(cont==mi_sub_set.size())//evalua si la cantidad que conto es igual al tamano de mi_sub_set
        {
            return true;//retorna true si la cantidad contada es igual
        }
        i++;//i se suma de uno en uno
    }
    return false;//retorna false si la cantidad contada no es igual

}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
