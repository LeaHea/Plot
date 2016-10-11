#include <string>
#include "Zone.cpp"


#ifndef _ZONES
#define	_ZONES


class Zones: public JSONArray{
	public:
		Zones() { _goodZip = false; }
		~Zones();

		void addZone(Zone *zone);
		Zone *zoneWithZip(int zip);
		void setHomeZone (Zone *zone);
		void getHomeZone ();
		void loadZonesFromJSONFile(std::string fileName);
		void print();
		void zipCheck( int zip );
		JSONDataObject *jsonObjectNode() { return new Zone(); }
		std::vector<Zone *> *listOfZones() { return (std::vector<Zone *>*) _listOfDataObjects; };

	private:
		Zone _homeZone;
		bool _goodZip;
};


#endif