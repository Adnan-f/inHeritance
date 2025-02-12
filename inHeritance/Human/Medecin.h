#ifndef __MEDECIN__
#define __MEDECIN__
#include <string>
#include "Person.h"
#include "../Institute/Hopital.h"
using namespace std;
class Medecin: public Person{
	private:
		std::string type;
		Hopital h1;
	public:
		void setHopital(Hopital x);
		std::string getHopital();
		void setType(string type);
		std::string getType();
		bool isAvailable();
};

#endif
