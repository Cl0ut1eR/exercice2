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
	Detail Detail;
  public:
	  Periode();
	  Periode(const Periode&);


	string getTitre();

	int getHeureDebut() const;
	int getMinuteDebut() const;
	int getHeureFin() const;
	int getMinuteFin() const;

	string getTexte() const;
	string getEmplacement() const;


	void setTitre(string);

	void FixerDebutPeriode(int Heure, int Minutes);
	void FixerFinPeriode(int Heure, int Minutes);

	void setTexte(string);
	void setEmplacement(string);
};
#endif
