#include "periode.h"

Periode::Periode():HeureDebut(), HeureFin(), Detail()
{
	titrePeriode = "";

}

Periode::Periode(const Periode& inPeriode)
{
	titrePeriode = inPeriode.titrePeriode;
	HeureDebut = inPeriode.HeureDebut;
	HeureFin = inPeriode.HeureFin;
	Detail = inPeriode.Detail;
}


#pragma region Get

string Periode::getTitre() const
{
  return titrePeriode;
}
float Periode::getTempsPeriode() const
{
	float Minutes = getMinuteFin() - getMinuteDebut();
	float Heures = getHeureFin() - getHeureDebut();
	if (Minutes < 0)
	{
		Heures--;
		Minutes += 60;
	}
	Heures=(Heures + (Minutes / 60)) * 100;
	int H2 = Heures;
	Heures =  H2;
	Heures = Heures / 100;
	return Heures;
}


//----------heure------------

int Periode::getHeureDebut() const
{
	return HeureDebut.getHeure();
}

int Periode::getMinuteDebut() const
{
	return HeureDebut.getMinute();
}

int Periode::getHeureFin() const
{
	return HeureFin.getHeure();
}

int Periode::getMinuteFin() const
{
	return HeureFin.getMinute();
}

string Periode::getHeureCompleteDebut() const
{
	return HeureDebut.getHeureComplete();
}
string Periode::getHeureCompleteFin() const
{
	return HeureFin.getHeureComplete();
}
//-------detail-----------
 string Periode::getTexte() const
{
	 return Detail.getTexte();
}
 string Periode::getEmplacement()const
{
	 return Detail.getEmplacement();
}

#pragma endregion


#pragma region Set

void Periode::setTitre(string inTitre)
{
  titrePeriode = inTitre;
}

//---------------heure--------------------
void Periode::FixerDebutPeriode(int inHeure, int inMinutes)
{
	HeureDebut.FixerHeure(inHeure, inMinutes);
}
void Periode::FixerFinPeriode(int inHeure, int inMinutes)
{
	HeureFin.FixerHeure(inHeure, inMinutes);
}
//-------detail-----------
void Periode::setTexte(string inTexte)
{
	Detail.setTexte(inTexte);
}
void Periode::setEmplacement(string inEmplacement)
{
	Detail.setEmplacement(inEmplacement);
}

#pragma endregion