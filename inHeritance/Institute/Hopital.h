#ifndef __HOPITAL__
#define __HOPITAL__
#include <string>
#include "Infrastructure.h"
class Medecin;
using namespace std;
	class Hopital: public Infrastructure{
		private:
			std::string hopitalType;
		public:
			void setHopitalType(std::string hopitalType);
			std::string getHopitalType();
			void callMedecin(Medecin x);
			
			
	};	
#endif

