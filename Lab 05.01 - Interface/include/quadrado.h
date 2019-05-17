#ifndef PDS2_QUADRADO_H
#define PDS2_QUADRADO_H

#include "forma.h"
#include "forma2d.h"
#include <string>

class Quadrado : public Forma2D{
private:
    double _aresta;
    std::string _cor;
    std::string _nome;
public:
  Quadrado(std::string cor, double aresta);
  virtual double get_area();
  virtual double get_perimetro();
  virtual std::string get_cor() ;
  virtual std::string get_nome() ;
};

#endif