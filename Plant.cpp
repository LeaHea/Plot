#include "Plant.hpp"


Plant::Plant( std::string name, int id, std::string type){
	_name = name;
	_id = id;
	_type = type;

}

std::string Plant::name() {
 return _name;
}

int Plant::id() {
	return _id;
}

std::string Plant::type() {
 return _type;
}


