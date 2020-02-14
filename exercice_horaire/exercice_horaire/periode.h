#ifndef periodeH
#define periodeH
#include <string>
#include <iostream>
#include <sstream>
#include "heure.h"
#include "detailPeriode.h"
using namespace std;

class Periode
{
  private:
	string titrePeriode;
  public:
	string getTitre();
	void setTitre(string);


};
#endif
