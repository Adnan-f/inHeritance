#ifndef __INFRASTRUCTURE__
#define __INFRASTRUCTURE__
#include <string>
using namespace std;
class Etudiant;
class Enseignant;
class Medecin;
class Infrastructure{
	private:
		std::string place;
		std::string name;
	public:
		void setPlace(std::string place);
		std::string getPlace();
		void setName(std::string name);
		std::string getName();
		bool isOpen();
};
#endif
