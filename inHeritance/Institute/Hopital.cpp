#include "Hopital.h"
#include "../Human/Medecin.h"
#include "Infrastructure.h"
using namespace std;

void Hopital::setHopitalType(std::string hopitalType){
	this->hopitalType = hopitalType;
	
	}
std::string Hopital::getHopitalType(){
	return hopitalType;
}
void Hopital::callMedecin(Medecin x){}
