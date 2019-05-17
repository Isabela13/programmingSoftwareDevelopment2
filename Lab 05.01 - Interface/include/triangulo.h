#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include "forma.h"
#include "forma2d.h"
#include <string>

class Triangulo : public Forma2D{
private:
    double _aresta1;
    double _aresta2;
    double _aresta3;
    std::string _cor;
    std::string _nome;
public:
  Triangulo(std::string cor, double aresta1 ,  double aresta2 ,  double aresta3  );
  virtual double get_area();
  virtual double get_perimetro();
  virtual std::string get_cor() ;
  virtual std::string get_nome() ;
};

#endif