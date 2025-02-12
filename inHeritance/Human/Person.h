#ifndef __PERSON__
#define __PERSON__
#include <string>
using namespace std;
class Person{
	private:
		std::string name;
		int age;
	public:
		void setName(std::string name);
		std::string getName();
		void setAge(int x);
		int getAge();
		void eat();
		void run();
		void walk();
};
#endif

