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
	Heure HeureDebut;
	Heure HeureFin;
  public:
	  Periode();


	string getTitre();
	int getHeureDebut() const;
	int getMinuteDebut() const;
	int getHeureFin() const;
	int getMinuteFin() const;


	void setTitre(string);
};
#endif
