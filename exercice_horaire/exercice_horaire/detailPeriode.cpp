#include "detailPeriode.h"

string Detail::getTexte() const
{
  return texteDetail;
}

string Detail::getEmplacement() const
{
	return emplacement;
}

void Detail::setTexte(string inTexte)
{
  texteDetail = inTexte;
}

void Detail::setEmplacement(string inEmplacement)
{
  emplacement = inEmplacement;
}
