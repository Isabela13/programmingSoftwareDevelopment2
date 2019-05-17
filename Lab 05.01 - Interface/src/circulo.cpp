#ifndef PDS2_CIRCULO_H
#define PDS2_CIRCULO_H

#include "forma.h"
#include "forma2d.h"
#include <string>

class Circulo : public Forma2D{
private:
    double _raio;
    std::string _cor;
    std::string _nome;
public:
  Circulo(std::string cor, double raio);
  virtual double get_area();
  virtual double get_perimetro();
  virtual std::string get_cor() ;
  virtual std::string get_nome() ;
};

#endif