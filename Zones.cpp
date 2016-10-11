#include "Zones.hpp"


void Zones::addZone(Zone *zone){
	_listOfDataObjects->push_back(zone);

}

Zone *Zones::homeZone(){
	return _homeZone;
}


void Zones::setHomeZone (Zone *zone){
	_homeZone = *zone;
}

Zone *Zones::zoneWithZip(int zip){
	int that;
	for (std::vector<Zone*>::iterator iter = listOfZones()->begin(); 
		iter != listOfZones()->end(); ++iter){

		if (zip == (*iter) -> valueForIntegerAttribute("zip_code"))
			return (*iter);
	}

}
void Zones::getHomeZone(){
	int zip;

	std::cout << "Enter Zip Code: ";
	std::cin >> zip;

	zipCheck(zip);

	setHomeZone(zoneWithZip (zip));
	std::cout << "Fucking great. Your zone is " << _homeZone.zone();

}

void Zones::zipCheck( int zip ) {
	if (isdigit(zip) && zip < 100000 && zip > 0)
		break;
	else getHomeZone();

}


void Zones::loadZonesFromJSONFile(std::string fileName){
	std::fstream zzstream;
	zzstream.open(fileName.c_str(), std::fstream::in);
	parseJSONArray(zzstream);
	zzstream.close();

}

void Zones::print(){
	for (std::vector<Zone*>::iterator iter = listOfZones()->begin(); iter != listOfZones()->end(); ++iter){
		(*iter)->print();
	}	
}