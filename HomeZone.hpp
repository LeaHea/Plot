#include <string>

#ifndef _HOMEZONE
#define	_HOMEZONE


class HomeZone{
	public:
		HomeZone (int zip);
		int zip ();
		std::string zone();
		std::string city();
		std::string state();
		float latitude();
		float longitude();

	private:
		std::string _zone, _city, _state;
		int _zip;
		float _latitude, _longitude;

};


#endif