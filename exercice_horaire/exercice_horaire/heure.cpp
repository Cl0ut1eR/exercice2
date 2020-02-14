#include "heure.h"

Heure::Heure()
{
	heure = 0;
	minute = 0;
}

Heure::Heure(int inHeure, int inMinutes)
{
	heure = inHeure;
	minute = inMinutes;
}

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

