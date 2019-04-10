#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

/* 
 * Para suportar valores padrões. Crie 2 construtores, 1 sem parâmetros e outro
 * com parâmetros.
 * 
 * Crie uma classe Rectangle com atributos height e width, cada um dos quais assume o valor padrão de
    1. Forneça funções-membro que calculam os atributos perimeter e área do retângulo. Além disso,
    forneça as funções set e get para os atributos height e width. As funções set devem verificar se
    height e width são números de ponto flutuante maiores que 0,0 e menores que 20,0.

 */ 

    class Rectangle {
        float _height = 1;
        float _width = 1;

        public:
        Rectangle (float height , float width);
        Rectangle ();

        float get_height();
        void set_height(float height);
        float get_width();
        void set_width(float width);
        float get_perimeter();
        float get_area();


    };

#endif