#include "periode.h"

Periode::Periode():HeureDebut(), HeureFin()
{
	titrePeriode = "";

}



string Periode::getTitre()
{
  return titrePeriode;
}

#pragma region Get Heure
int Periode::getHeureDebut() const
{
	return HeureDebut.getHeure();
}

int Periode::getMinuteDebut() const
{
	return HeureDebut.getMinute;
}

int Periode::getHeureFin() const
{
	return HeureFin.getHeure();
}

int Periode::getMinuteFin() const
{
	return HeureFin.getMinute;
}
#pragma endregion


void Periode::setTitre(string inTitre)
{
  titrePeriode = inTitre;
}
