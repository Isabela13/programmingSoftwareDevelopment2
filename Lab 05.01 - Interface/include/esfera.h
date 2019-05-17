#ifndef PDS2_ESFERA_H
#define PDS2_ESFERA_H

#include "forma.h"
#include "forma3d.h"
#include <string>

class Esfera : public Forma3D{
private:
    double _raio;
    std::string _cor;
    std::string _nome;
public:
  Esfera(std::string cor, double raio);
  virtual double get_volume();
  virtual std::string get_cor() ;
  virtual std::string get_nome() ;
};

#endif