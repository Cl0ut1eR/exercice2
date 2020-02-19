#ifndef heureH
#define heureH
#include <string>
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
class Heure
{
  private:
    int heure;
    int minute;
  public:
	 Heure();
	 Heure(int Heure, int Minutes);


    int getHeure() const;
	int getMinute() const;
	string getHeureComplete() const;


	void FixerHeure(int inHeure, int inMinute);
};
#endif
