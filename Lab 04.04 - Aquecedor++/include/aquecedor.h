#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

/*
Altere a classe do exercício anterior (Lab 04.03) para que ela tenha três novos atributos:
 temperatura mínima,
temperatura máxima e fator de incremento da temperatura. Os dois primeiros devem ser inicializados
com 10 e 40 graus respectivamente no construtor.
A classe deve ter um construtor sem parâmetros,
que definirá o fator de incremento em 5 graus,
 um segundo construtor que recebe a temperatura inicial
e um terceiro que recebe a temperatura inicial e o fator de incremento.
Altere os métodos existentes na classe de forma apropriada com o objetivo
 de manter o estado do objeto
sempre válido (ex: o fator de incremento deve ser usado toda vez que os métodos 
aquecer e resfriar
forem chamados). Escreva mensagens na saída padrão quando uma ação não puder ser executada por
não ser um estado de objeto válido.
Por fim, crie um método que permita alterar o fator de incremento da temperatura
 depois de um objeto
já ter sido criado.

*/

class Aquecedor{
    float temperatura;
    float temperatura_min;
    float temperatura_max;
    float fator_incremento;
    public:
    Aquecedor();
    Aquecedor(float temperatura_inicial);
    Aquecedor(float temperatura_inicial , float fator_incremento);

    float aquecer();
    float resfriar();
    float get_temperatura();
    float get_fatorIncremento();
    void set_fatorIncremento(float fi);
};

#endif