/*o método para checar se a lista é um palíndromo deve ter a forma:
boolean checa_palindromo() */

#ifndef LISTAENCADEADA_H_
#define LISTAENCADEADA_H_


struct node_t {
	int elemento;
	node_t *proximo;
	node_t *anterior;
	
};

struct ListaEncadeada {
  node_t *_inicio;
  node_t *_fim;
  int _num_elementos_inseridos;

  ListaEncadeada();
  ~ListaEncadeada();

  void insere_elemento(int elemento);
  void insere_primeiro(int elemento);
  int get_iesimo(int i);
  void remover_elemento();
  void remover_primeiro();
  void inserir_iesimo(int elemento , int i);
  void remover_iesimo(int i);
  int tamanho();
  int k_esimo(bool direcao, int k);
  void remove_consecutivos();
  bool checa_palindromo();
  void imprimir();
  
};




#endif /* LISTAENCADEADA_H_ */