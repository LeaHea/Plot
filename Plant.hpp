#include <string>

#ifndef _PLANT
#define	_PLANT


class Plant{
	public:
		Plant (std::string name, int id, std::string type);
		std::string name();
		int id();
		std::string type();


	private:
		std::string _name, _type;
		int _id;

};


#endif