#include "JSONArray.cpp"

#ifndef _ZONE
#define _ZONE


class Zone: public JSONDataObject {
public:
  Zone();
  Zone(JSONDataObject *);
  ~Zone();

  std::string zone();
  std::string city();
  std::string state();
  int zip();
  float latitude();
  float longitude();

  void print();

private:
    std::string _zone, _city, _state;
    int _zip;
    float _latitude, _longitude;

    bool cachedZone, cachedCity, cachedState, cachedZip, cachedLat, cachedLong;

};


#endif