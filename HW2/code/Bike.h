#ifndef _BIKE_H
#define _BIKE_H

#include <string>
using namespace std;

class Bike {
public:
	string get_id();
	string get_product_name();
protected: 
	string id_;
	string product_name_;
};

#endif //_BIKE_H