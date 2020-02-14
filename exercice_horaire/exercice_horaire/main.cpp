#include <string>
#include <iostream>
#include <conio.h>
#include "periode.h"
using namespace std;

enum joursSemaine{Lundi, Mardi, Mercredi, Jeudi, Vendredi};
const int joursMaximum = 5;
const int periodesCoursMaximum = 5; //max 5 cours dans une journ�e

Periode horaire[joursMaximum][periodesCoursMaximum];

void AjouterDesCoursAHoraire();
void AjouterCours(joursSemaine, int periode, int heureDebut, int minDebut, int heureFin, int minFin, string titreCours);
void AfficherHoraire();
void AjouterDetailAuCours(joursSemaine, int periode, string detail, string lieu);

void main()
{
	AjouterDesCoursAHoraire();
	AfficherHoraire();
	_getch();
}

void AjouterDesCoursAHoraire()
{
	AjouterCours(Lundi, 0, 9, 55, 12, 35, "bd");
	//AjouterDetailAuCours(Lundi, 0, "Luce", "B-534");
	AjouterCours(Lundi, 1, 14,30,17,15,"r�seau");
	//AjouterDetailAuCours(Lundi, 1, "Yvan", "B-533");
	AjouterCours(Mardi, 0, 14, 30, 17, 15, "r�seau");
	//AjouterDetailAuCours(Mardi, 0, "Yvan", "B-533");
	AjouterCours(Mercredi, 0, 11,45,14,25,"objet");
	//AjouterDetailAuCours(Mercredi, 0, "Marthe", "B-534");
	AjouterCours(Jeudi, 0, 8,0,9,45,"analyse");
	//AjouterDetailAuCours(Jeudi, 0, "Alex", "B-534");
	AjouterCours(Jeudi, 1, 9, 55, 12, 35, "bd");
	//AjouterDetailAuCours(Jeudi, 1, "Luce", "B-534");
	AjouterCours(Vendredi, 0, 12,40,14,25,"objet");
	//AjouterDetailAuCours(Vendredi, 0, "Marthe", "B-534");
	AjouterCours(Vendredi, 1, 14, 30, 16, 20, "analyse");
	//AjouterDetailAuCours(Vendredi, 1, "Alex", "B-534");
	AjouterCours(Lundi, 3, 18, 0, 20, 30, "impro");
	//AjouterDetailAuCours(Lundi, 3, "Jordan", "entrecours");
}

//ajoute les cours dans l'horaire
void AjouterCours(joursSemaine inJour,int inPeriode, int inHeureDebut, int inMinuteDebut, int inHeureFin, int inMinuteFin, string inCours)
{

}

//affiche l'horaire de toute la semaine
void AfficherHoraire()
{
	for (int cptJour = Lundi; cptJour < joursMaximum; cptJour++)
	{
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

	}
}

//ajoute les cours dans l'horaire
void AjouterDetailAuCours(joursSemaine inJour, int inPeriode, string inTexte, string inLieu)
{

}
