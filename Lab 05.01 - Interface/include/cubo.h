#ifndef PDS2_CUBO_H
#define PDS2_CUBO_H

#include "forma.h"
#include "forma3d.h"
#include <string>

class Cubo : public Forma3D{
private:
    double _raio;
    std::string _cor;
    std::string _nome;
public:
  Cubo(std::string cor, double raio);
  virtual double get_volume();
  virtual std::string get_cor() ;
  virtual std::string get_nome() ;
};

#endif