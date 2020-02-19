#include <string>
#include <iostream>
#include <conio.h>
#include "periode.h"
#include <vector>
using namespace std;

enum joursSemaine{Lundi, Mardi, Mercredi, Jeudi, Vendredi};
const int joursMaximum = 5;
const int periodesCoursMaximum = 5; //max 5 cours dans une journée

Periode horaire[joursMaximum][periodesCoursMaximum];

void AjouterDesCoursAHoraire();
void AjouterCours(joursSemaine, int periode, int heureDebut, int minDebut, int heureFin, int minFin, string titreCours);
void AfficherHoraire();
void AjouterDetailAuCours(joursSemaine, int periode, string detail, string lieu);
void GetPeriodesPour1Jour(std::vector<Periode*>* TabDesPeriodes, int Jour);
void AfficherPeriode(Periode Periode);

void main()
{
	AjouterDesCoursAHoraire();
	AfficherHoraire();
	_getch();
}

void AjouterDesCoursAHoraire()
{
	AjouterCours(Lundi, 0, 9, 55, 12, 35, "bd");
	AjouterDetailAuCours(Lundi, 0, "Luce", "B-534");
	AjouterCours(Lundi, 1, 14,30,17,15,"réseau");
	AjouterDetailAuCours(Lundi, 1, "Yvan", "B-533");
	AjouterCours(Mardi, 0, 14, 30, 17, 15, "réseau");
	AjouterDetailAuCours(Mardi, 0, "Yvan", "B-533");
	AjouterCours(Mercredi, 0, 11,45,14,25,"objet");
	AjouterDetailAuCours(Mercredi, 0, "Marthe", "B-534");
	AjouterCours(Jeudi, 0, 8,0,9,45,"analyse");
	AjouterDetailAuCours(Jeudi, 0, "Alex", "B-534");
	AjouterCours(Jeudi, 1, 9, 55, 12, 35, "bd");
	AjouterDetailAuCours(Jeudi, 1, "Luce", "B-534");
	AjouterCours(Vendredi, 0, 12,40,14,25,"objet");
	AjouterDetailAuCours(Vendredi, 0, "Marthe", "B-534");
	AjouterCours(Vendredi, 1, 14, 30, 16, 20, "analyse");
	AjouterDetailAuCours(Vendredi, 1, "Alex", "B-534");
	AjouterCours(Lundi, 3, 18, 0, 20, 30, "impro");
	AjouterDetailAuCours(Lundi, 3, "Jordan", "entrecours");
}

//ajoute les cours dans l'horaire
void AjouterCours(joursSemaine inJour,int inPeriode, int inHeureDebut, int inMinuteDebut, int inHeureFin, int inMinuteFin, string inCours)
{
	horaire[inJour][inPeriode].FixerDebutPeriode(inHeureDebut, inMinuteDebut);
	horaire[inJour][inPeriode].FixerFinPeriode(inHeureFin, inMinuteFin);
	horaire[inJour][inPeriode].setTitre(inCours);
}

//affiche l'horaire de toute la semaine
void AfficherHoraire()
{
	vector<Periode*>TabDesPeriodes;
	for (int cptJour = Lundi; cptJour < joursMaximum; cptJour++)
	{
		GetPeriodesPour1Jour(&TabDesPeriodes, cptJour);	
		switch (cptJour)
		{
		case Lundi: cout << "LUNDI\n";
			break;
		case Mardi: cout << "\nMARDI\n";
			break;
		case Mercredi: cout << "\nMERCREDI\n";
			break;
		case Jeudi: cout << "\nJEUDI\n";
			break;
		case Vendredi: cout << "\nVENDREDI\n";
			break;
		}
		for (int i = 0; i < TabDesPeriodes.size(); i++)
		{
			AfficherPeriode(*TabDesPeriodes[i]);
		}
	}
}


void AfficherPeriode(Periode inPeriode)
{
	cout << inPeriode.getTitre() << "\n";
	cout << "De " << inPeriode.getHeureCompleteDebut() << " à " << inPeriode.getHeureCompleteFin() << "\n";
	cout << "Par " << inPeriode.getTexte() << " au local " << inPeriode.getEmplacement()<<"\n";
	cout << "Dure du cour : " << inPeriode.getTempsPeriode()<<" heures\n\n";
}

void GetPeriodesPour1Jour(std::vector<Periode*>* TabDesPeriodes,int inJour)
{
	TabDesPeriodes->clear();

	for (int i=0;i < periodesCoursMaximum ;i++)
	{
		if (horaire[inJour][i].getTitre()!= "")
		{
			TabDesPeriodes->push_back(&horaire[inJour][i]);
		}
	}
}

//ajoute les cours dans l'horaire
void AjouterDetailAuCours(joursSemaine inJour, int inPeriode, string inTexte, string inLieu)
{
	horaire[inJour][inPeriode].setEmplacement(inLieu);
	horaire[inJour][inPeriode].setTexte(inTexte);
}
