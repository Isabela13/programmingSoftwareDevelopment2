#ifndef CIRCUFERENCIA
#define CIRCUFERENCIA


struct Circunferencia {
  double xc;
  double yc;
  double raio;

  Circunferencia(double x, double y, double r);
  double calcular_area();
  bool possui_intersecao(Circunferencia  &c);
};


#endif