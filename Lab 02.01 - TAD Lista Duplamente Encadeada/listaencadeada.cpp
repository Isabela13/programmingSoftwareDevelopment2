#include <iostream>

#include "listaencadeada.h"


ListaEncadeada::ListaEncadeada() {
  _inicio = nullptr;
  _fim = nullptr;
  _num_elementos_inseridos = 0;
}

ListaEncadeada::~ListaEncadeada() {
  node_t *anterior = nullptr;
  node_t *proximo = _inicio;
  while (proximo != nullptr) {
    anterior = proximo;
    proximo = proximo->proximo;
    delete anterior;
  }
}

void ListaEncadeada::insere_elemento(int elemento) {
  node_t *novo = new node_t();
  novo->elemento = elemento;
  novo->proximo = nullptr;
  novo->anterior = nullptr;
  if (_inicio == nullptr) {
    _inicio = novo;
    _fim = novo;
  } else {
    _fim->proximo = novo;
    novo->anterior = _fim;
    _fim = novo;
  }
  _num_elementos_inseridos++;
}

void ListaEncadeada::insere_primeiro (int elemento){ 
    node_t *novo = new node_t();
    novo->elemento = elemento;
    novo->anterior = nullptr;
    novo->proximo = _inicio;
    
    _inicio->anterior = novo;
    _inicio = novo;
   _num_elementos_inseridos++;
} 

int ListaEncadeada::get_iesimo (int i){
    node_t *atual = _inicio;
    int count = 0 , elemento;
    while (atual != nullptr) {
        if (count==i){
            elemento=atual->elemento;
            break;
        }
        atual = atual->proximo;
        count++;
    }
    return elemento;
}

void ListaEncadeada::remover_elemento() {
    node_t *remov_elemento = _fim;
    _fim->anterior->proximo = nullptr;
    _fim = _fim->anterior;
    _num_elementos_inseridos--;
    delete remov_elemento;

}

void ListaEncadeada::remover_primeiro() {
    node_t *remov_elemento = _inicio;
    _inicio->proximo->anterior = nullptr;
    _inicio = _inicio->proximo;
    _num_elementos_inseridos--;
    delete remov_elemento;

}

void ListaEncadeada::inserir_iesimo(int elemento , int i){
    if (i < 0){
        return;
    }else if (i==0){
        //inserir o primeiro
        insere_primeiro(elemento);
    }else{
        node_t *novo = new node_t();
        node_t *aux;
        novo->elemento=elemento;
        for (int j = 1 ; j< i-1 ; j++){
            _inicio = _inicio->proximo;
        }
        aux = _inicio->proximo;
        _inicio->proximo = novo;
        novo->proximo = aux;
    }
}


void ListaEncadeada::remover_iesimo(int i) {
  if (i >= _num_elementos_inseridos) {
    return;
  }
  node_t *atual = _inicio;
  for (int j = 0; j < i; j++)
    atual = atual->proximo;
  if (atual->proximo != nullptr)
    atual->proximo->anterior = atual->anterior;
  if (atual->anterior != nullptr)
    atual->anterior->proximo = atual->proximo;
  if (i == 0)
    _inicio = atual->proximo;
  if (i == _num_elementos_inseridos - 1)
    _fim = atual->anterior;
  _num_elementos_inseridos--;
  delete atual;
}

int ListaEncadeada::tamanho(){
    return _num_elementos_inseridos;
}


void ListaEncadeada::imprimir() {
  node_t *atual = _inicio;
  while (atual != nullptr) {
    std::cout << atual->elemento << " ";
    atual = atual->proximo;
  }
  std::cout << std::endl;
}