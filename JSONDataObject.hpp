#ifndef _JSONOBJECT
#define _JSONOBJECT

#include <vector>
#include "JSONDataItem.cpp"

class JSONDataObject {
public:
  JSONDataObject();
  ~JSONDataObject();

  std::vector <JSONDataItem*> *listOfDataItems() const { return _listOfDataItems; }

  void parseFromJSONstream(std::fstream &stream);
  virtual void print();
  std::string valueForStringAttribute(std::string s);
  float valueForIntegerAttribute(std::string s);

private:
  std::vector <JSONDataItem*> *_listOfDataItems;
};

#endif
