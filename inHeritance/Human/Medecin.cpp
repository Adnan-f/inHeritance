#include "Medecin.h"
#include "Person.h"

using namespace std;
void Medecin::setHopital(Hopital x){
	h1 = x;
	}
std::string Medecin::getHopital(){
	return h1.getHopitalType();
	}
void Medecin::setType(std::string type){
	this->type = type;
	}
std::string Medecin::getType(){
	return type;
	}
bool Medecin::isAvailable(){
	return true;
	}
