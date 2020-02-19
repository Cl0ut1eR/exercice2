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

	  /*get le titre de la période*/
	string getTitre() const;

	int getHeureDebut() const;
	int getMinuteDebut() const;
	int getHeureFin() const;
	int getMinuteFin() const;
	string getHeureCompleteDebut() const;
	string getHeureCompleteFin() const;
	float getTempsPeriode() const;

	/*get le texte de détail*/
	string getTexte() const;
	string getEmplacement() const;

	/*set le titre de la période*/
	void setTitre(string);

	void FixerDebutPeriode(int Heure, int Minutes);
	void FixerFinPeriode(int Heure, int Minutes);

	/*set le texte de détail*/
	void setTexte(string);
	/*set emplacement de détail*/
	void setEmplacement(string);



};
#endif
