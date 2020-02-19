#include "heure.h"

Heure::Heure()
{
	heure = 0;
	minute = 0;
}

Heure::Heure(int inHeure, int inMinutes)
{
	if (inHeure <= 24 && inHeure >= 0)
	{
	heure = inHeure;
	}
	else
	{
		heure =0;
	}

	if(inMinutes>=0&&inMinutes<=60)
	{
		minute = inMinutes;
	}
	else 
	{
		minute = inMinutes;
	}
}

int Heure::getHeure() const
{
  return heure;
}

int Heure::getMinute() const
{
  return minute;
}

string Heure::getHeureComplete() const
{
	
	string heureComplete = "";

	if (heure < 10)
	{
		heureComplete += "0";
	}
	heureComplete += to_string(heure)+":";
	if(minute<10)
	{
		heureComplete += "0";
	}
	heureComplete += to_string(minute);
	return heureComplete;
}


void Heure::FixerHeure(int inHeure, int inMinutes)
{
	if (inHeure <= 24 && inHeure >= 0)
	{
		heure = inHeure;
	}

	if (inMinutes >= 0 && inMinutes <= 60)
	{
		minute = inMinutes;
	}
}

