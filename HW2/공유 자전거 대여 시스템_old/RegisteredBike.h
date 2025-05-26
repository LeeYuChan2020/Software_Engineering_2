/**
 * Project SE Design & Implementation
 */


#ifndef _REGISTEREDBIKE_H
#define _REGISTEREDBIKE_H

#include "Bike.h"


class RegisteredBike: public Bike {
public: 
	
/**
 * @param bike_id
 * @param bike_product_name
 */
void RegisteredBike(String bike_id, String bike_product_name);
	
/**
 * @param bike_id
 */
RegisteredBike FindAndShowBikeInfo(String bike_id);
	
String get_product_name();
};

#endif //_REGISTEREDBIKE_H