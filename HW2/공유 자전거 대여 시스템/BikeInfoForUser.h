#ifndef _BIKEINFOFORUSER_H
#define _BIKEINFOFORUSER_H

#include "Bike.h"
#include <string>
using namespace std;

class BikeInfoForUser: public Bike {
public: 
	
/**
 * ID = bikeID
 * ProductName = bikeProdName
 * 
 * @param bike_id
 * @param bike_product_name
 */
	BikeInfoForUser(string bike_id, string bike_product_name);
	
/**
 * String[2] : {id, ProductName}
 */
	pair<string, string> get_bike_info();
};

#endif //_BIKEINFOFORUSER_H