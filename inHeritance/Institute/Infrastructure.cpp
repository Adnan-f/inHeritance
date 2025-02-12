#include "Infrastructure.h"
using namespace std;

void Infrastructure::setPlace(std::string place){
	this->place = place;
	
}
std::string Infrastructure::getPlace(){
	return place;
}
void Infrastructure::setName(std::string name){
	this->name = name;
}
std::string Infrastructure::getName(){
	return name;
}
bool Infrastructure::isOpen(){
	return true;
}






