#ifndef detailH
#define detailH
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Detail
{
  private:
	string texteDetail;
    string emplacement;
  public:
	Detail();

	string getTexte() const;
	string getEmplacement() const;

	void setTexte(string);
	void setEmplacement(string);
};
#endif
