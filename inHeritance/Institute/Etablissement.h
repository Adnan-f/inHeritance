#ifndef __ETABLISSEMENT__
#define __ETABLISSEMENT__
#include <string>
#include "Infrastructure.h"
class Etudiant;
using namespace std;
class Etablissement: public Infrastructure{
	private:
		std::string establishType;
	public:
		void setEstablishType(std::string x);
		std::string getEstablishType();
		void enroll(Etudiant x);
		void hire(Enseignant x);
};
#endif

