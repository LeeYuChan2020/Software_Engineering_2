/**
 * Project SE Design & Implementation
 */


#ifndef _BIKEINFOFORUSER_H
#define _BIKEINFOFORUSER_H

#include "Bike.h"


class BikeInfoForUser: public Bike {
public: 
	
/**
 * ID = bikeID
 * ProductName = bikeProdName
 * 
 * @param bike_id
 * @param bike_product_name
 */
void BikeInfoForUser(String bike_id, String bike_product_name);
	
/**
 * String[2] : {id, ProductName}
 */
String[2] get_bike_info();
};

#endif //_BIKEINFOFORUSER_H