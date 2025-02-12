#include "Etablissement.h"
#include "../Human/Etudiant.h"

using namespace std;

void Etablissement::setEstablishType(std::string x){
	establishType = x;
	}
std::string Etablissement::getEstablishType(){
	return establishType;
	}
void Etablissement::enroll(Etudiant x){}
void Etablissement::hire(Enseignant x){}
