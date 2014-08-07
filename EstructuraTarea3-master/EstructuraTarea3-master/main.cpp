#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//agrega 'valor' a 'mi_set'
void agregarASet(set<int> *mi_set,int valor)
{
        mi_set->insert(valor);
}

//agrega 'valor' a 'mi_map' usando la 'llave' como llave
void agregarMap(map<string, int> *mi_map, string llave, int valor)
{
    mi_map->insert(pair<string,int>(llave,valor)); //Lo unico que cambie es en vez de (mi_map.insert) a (mi_map->insert) porque lo mandamos como referencia estamos utilizando punteros
    // no entendi mucho esto pero me guie de aqui: http://www.cplusplus.com/reference/map/map/insert/
}

//devuelve cuantos elementos de 'mi_multiset' tienen un valor de 'valor'
int contarElementosMultiset(multiset<int> mi_multiset,int valor)
{ //Creo una variable donde guardare los valores de multiset, con la funcion "count" de multiset cuento a ver cuantos valores tiene el multiset y retorno la variable para saber cuantos veces se hayaron los valores
        int conta=1;//por warning los inicialize
        if(conta != 0) //si el contador es distinto a cero
        {
             conta = mi_multiset.count(valor); //contador va a contar los valores que haigan con la funcion count
        }
        return conta;
        //Me guie de aqui: http://www.cplusplus.com/reference/set/multiset/count/
}

//devuelve cuantos elementos de 'mi_multimap' usan 'llave' como llave
int contarElementosMultimap(multimap<string,int> mi_multimap,string llave)
{//Creo una variable donde guardare los valores de multimap, con la funcion "count" de multimap cuento a ver cuantos valores tiene el multimap y retorno la variable para saber cuantos veces se hayaron los valores
     int conta=1; //por warning los inicialize
        if(conta != 0)
        {
             conta = mi_multimap.count(llave);
        }
        return conta;
}

//devuelve la suma de los elementos de 'mi_multiset' que usan 'llave' como llave
int sumaElementosMultiset(multiset<int> mi_multiset, int valor)
{

    return -1;
}

//devuelve la suma de los elementos de 'mi_multimap' que usan 'llave' como llave
int sumaElementosMultimap(multimap<string, int> mi_multimap, string llave)
{
    return -1;
}

//el promedio de todos los elementos que tiene 'mi_multiset' (incluyendo valores repetidos)
int promedioElementosMultiset(multiset<int>mi_multiset)
{
    return -1;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
