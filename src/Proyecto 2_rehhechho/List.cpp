//
// Created by norma on 23/5/2021.
//

#include "List.h"
#include "MediatorImplemented.h"

Lista::Lista() {
    raiz=nullptr;
    aux=nullptr;
}

Lista::~Lista() {
    Nodo * anterior= nullptr;
    if (raiz->getSig()== nullptr){
        delete raiz;
    } else{
        while (aux->getSig()!= nullptr){
            aux=raiz->getSig();
            while (aux->getSig()!= nullptr){
                anterior= aux;
                aux =aux->getSig();
            }
            anterior->setSig(nullptr);
            delete aux;

        }
    }
}

void Lista::agregarIni(Patient *P) {
    raiz = new Nodo(P, raiz);
}

string Lista::toString() {
    aux = raiz;
    stringstream s;
    while (aux != NULL) {
        s << aux->toString() << endl;
        aux= aux->getSig();
    }
    return s.str();
}

void Lista::agregarFinal(Patient *P) {
    aux=raiz;
    if (estaVacia()){
        raiz =new Nodo(P, nullptr);
    } else{
        while (aux->getSig()!= nullptr){
            aux =aux->getSig();
        }
        aux->setSig(new Nodo(P, nullptr));
    }
}

bool Lista::estaVacia() {
    return raiz== nullptr? true:false;
}


void Lista::ordenarLista() {
    aux =raiz;
    Nodo *temp = nullptr;
    Patient* P= nullptr;
    while (aux->getSig()!= nullptr){
        temp = aux->getSig();
        while (temp!= nullptr){
            if (aux->getPersona()->getId()> temp->getPersona()->getId()){//TODO cambiar que cuente el num de enfermedades
                P = temp->getPersona();
                temp->setPersona(aux->getPersona());
                aux->setPersona(P);
            }
            temp=temp->getSig();
        }
        aux=aux->getSig();
    }
}

bool Lista::eliminarIni() {
    if (estaVacia()){
        return false;
    } else{
        aux=raiz;
        raiz = raiz->getSig();
        delete aux;
        return true;
    }
}

bool Lista::eliminaFinal() {
    aux = raiz;
    Nodo* anterior= nullptr;
    if (estaVacia()) {
        return false;
    }
    else {
        while (aux->getSig() != nullptr) {
            anterior = aux;
            aux = aux->getSig();

        }
        anterior->setSig(nullptr);
        delete aux;
        aux = anterior;
        return true;
    }
}

int Lista::cuentaNodos() {
    int cont = 0;
    aux = raiz;
    while (aux != nullptr) {
        aux = aux->getSig();
        cont++;
    }
    return cont;
}

bool Lista::busqueda(string nombre) {
    aux = raiz;
    if (estaVacia()) {
        return false;
    }
    else {
        while (aux != nullptr) {
            if (aux->getPersona()->getName() == nombre) {
                return true;
            }
            aux = aux->getSig();
        }
        return false;
    }
}

Patient *Lista::acceso(string nombre) {
    if (estaVacia()) {
        return nullptr;
    }
    else {
        if (busqueda(nombre) != false) {
            return aux->getPersona();
        }
        return nullptr;
    }
}

void Lista::setMediator(Mediator *m) {
    aux = raiz;
    while (aux != NULL) {
        aux->getPersona()->setMediator(m);
        aux= aux->getSig();
    }
}
