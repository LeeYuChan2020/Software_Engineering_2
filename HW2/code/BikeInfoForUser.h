#ifndef _BIKEINFOFORUSER_H
#define _BIKEINFOFORUSER_H

#include "Bike.h"
#include <string>
using namespace std;

class BikeInfoForUser: public Bike {
public: 
	BikeInfoForUser(string bike_id, string bike_product_name);
	pair<string, string> get_bike_info();
};

#endif //_BIKEINFOFORUSER_H