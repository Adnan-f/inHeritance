#ifndef __ENSEIGNANT__
#define __ENSEIGNANT__
#include <string>
#include "../Institute/infra.h"
#include "Person.h"

class Etablissement;
using namespace std;
class Enseignant: public Person {
	private:
		int grade;
		std::string signature;
		Etablissement etab;
	public:
		void setGrade(int x);
		int getGrade();
		void setSignature(std::string signature);
		std::string getSignature();
		void setEtab(Etablissement x);
		Etablissement getEtab();	
};

#endif

