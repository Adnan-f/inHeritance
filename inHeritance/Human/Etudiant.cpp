#include "Etudiant.h"

using namespace std;

void Etudiant::setProf(Enseignant x){
	prof = x;
	}
std::string Etudiant::getProf(){
	return prof.getName();
	}

void Etudiant::setEtab(Etablissement x){
	etab = x;
	}
Etablissement Etudiant::getEtab(){
	return etab;
	}

void Etudiant::setGrade(int x){
	grade = x;
	}
int Etudiant::getGrade(){
	return grade;
	}
void Etudiant::attendClass(){
	//cout<<"\nThis student is in class";
	}
void Etudiant::proNote(int grade){}
