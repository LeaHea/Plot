#ifndef _JSONDATAITEM
#define _JSONDATAITEM

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
//#include <sstream>

class JSONDataItem {
public:
  JSONDataItem();
  void parseJSONItem(std::fstream &stream);
  std::string attribute();
  float integerValue();
  std::string stringValue();
  bool &isNumber();
  void print();

private:
  std::string _attribute, _svalue;
  float _ivalue;
  bool hasReadAnItem, _isNumber;

  std::string readQuotedString(std::fstream &stream);
};

#endif
