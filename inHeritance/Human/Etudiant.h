#ifndef __ETUDIANT__
#define __ETUDIANT__
#include <string>
#include "Person.h"
#include "../Institute/Etablissement.h"
#include "Enseignant.h"
using namespace std;

class Etudiant: public Person{
	private:
		int grade;
		Etablissement etab;
		Enseignant prof;
	public:
		void setProf(Enseignant x);
		std::string getProf();
		void setEtab(Etablissement x);
		Etablissement getEtab();
		void setGrade(int x);
		int getGrade();
		void attendClass();
		void proNote(int grade);
};
#endif

