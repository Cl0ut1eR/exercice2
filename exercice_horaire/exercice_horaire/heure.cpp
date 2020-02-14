#include "heure.h"


int Heure::getHeure() const
{
  return heure;
}

int Heure::getMinute() const
{
  return minute;
}

void Heure::FixerHeure(int inHeure, int inMinute)
{
	heure = inHeure;
	minute = inMinute;
}

