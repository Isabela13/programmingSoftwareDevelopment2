#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

/*
Implemente uma classe chamada Aquecedor. Ela deve ter um único atributo chamado
temperatura, cujo tipo deve ser um ponto flutuante de precisão dupla. Defina um construtor que
não recebe parâmetros e inicializa a temperatura em 20 graus. Crie os métodos aquecer e resfriar que
aumentam e diminuem a temperatura em 5 graus, respectivamente. Defina um método para retornar
o valor da temperatura.
*/

class Aquecedor{
    float temperatura;

    public:
    Aquecedor();

    float aquecer();
    float resfriar();
    float get_temperatura();
};
// Nome dos metodos:
// aquecer()
// resfriar()
// get_temperatura()

#endif