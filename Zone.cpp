#include "Zone.hpp"


Zone::Zone(){

	_zone = _city = _state = "";
	_zip = _latitude = _longitude = 0;

	cachedZone = cachedCity = cachedState = cachedZip = 
	cachedLat = cachedLong = false;


}

Zone::Zone(JSONDataObject *json){
	_zone = json->valueForStringAttribute("zone");
	_zip = json->valueForIntegerAttribute("zip_code");
	_city = json->valueForStringAttribute("city");
	_state = json->valueForStringAttribute("state");
	_latitude = json->valueForIntegerAttribute("latitude");
	_longitude = json->valueForIntegerAttribute("longitude");

}

Zone::~Zone(){

}


std::string Zone::zone(){
	if (cachedZone){
		return _zone;
	}
	cachedZone = true;
	return _zone = valueForStringAttribute("zone");

}

std::string Zone::city(){
	if (cachedCity)
		return _city;
	cachedCity = true;
	return _city = valueForStringAttribute("city");
}

std::string Zone::state(){
	if (cachedState)
		return _state;
	cachedState = true;

	return _state = valueForStringAttribute("state");
}

int Zone::zip(){
	if (cachedZip)
		return _zip;
	cachedZip = true;
	return _zip = valueForIntegerAttribute("zip_code");
}

float Zone::latitude(){
	if (cachedLat)
		return _latitude;
	cachedLat = true;
	return _latitude = valueForIntegerAttribute("latitude");
}

float Zone::longitude(){
	if (cachedLong)
		return _longitude;
	cachedLong = true;
	return _longitude = valueForIntegerAttribute("longitude");
}

void Zone::print(){
  std::cout << "\n\n";
  std::cout << "city: " << city() << std::endl;
  std::cout << "zone: " << zone() << std::endl;
  std::cout << "zip: " << zip() << std::endl;
  std::cout << "longitude: " << longitude() << std::endl;
  std::cout << "latitude: " << latitude() << std::endl;

}


