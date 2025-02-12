#include "Institute/infra.h"
#include "Human/human.h"
#include "Institute/Hopital.h"
#include "Human/Medecin.h"

using namespace std;

int main(){
	//#######hopital#######
	Hopital h1;
	h1.setHopitalType("nursery");
	Medecin m1;
	m1.setHopital(h1);
	m1.getHopital();
	m1.setAge(46);
	
	//#######Etablissement#######
	Etablissement mit;
	Etudiant el;
	Enseignant en;
	
	mit.setEstablishType("University");
	mit.setName("MISA");
	mit.setPlace("Ankatso");
	
	el.setEtab(mit);
	el.setGrade(4);
	el.attendClass();
	el.setName("Joe");
	
	en.setEtab(mit);
	en.setGrade(2);
	en.setSignature("Object Oriented Programming");
	en.setName("Joe");
	
	el.setProf(en);
	
	return 0;
}

