#include "Enseignant.h"
#include "../Institute/Etablissement.h"


using namespace std;

void Enseignant::setEtab(Etablissement x){
	etab = x;
	}
Etablissement Enseignant::getEtab(){
	return etab;
	}


void Enseignant::setGrade(int x){
	grade = x;
	}
int Enseignant::getGrade(){
	return grade;
	}
void Enseignant::setSignature(std::string signature){
	this->signature = signature;
	}
std::string Enseignant::getSignature(){
	return signature;
	}
