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
    int getHeure() const;
	int getMinute() const;
	void FixerHeure(int inHeure, int inMinute);
};
#endif
