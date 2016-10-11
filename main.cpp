#include <iostream>
#include "Plant.cpp"
#include "Zones.cpp"


int main(){

	int exit;
	std::cout << "this is a test, please compile ^^^^^\n\n";

	Zones *_zones = new Zones;
	
	_zones->loadZonesFromJSONFile("Zone_Zip.json");
	_zones->getHomeZone();

	//_zones->print();

	//Zone *lilZ = new Zone();
	//lilZ -> print();


	//HeirloomomeZone::HomeZone myZone = new HomeZone ("95407");
	//Plant::Plant *tomato = new Plant("Heirloom Tomato", 0, "Type");
	//std::cout << tomato->name() << '\n';
	std::cin >> exit;


	return 0;

}