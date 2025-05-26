/**
 * Project SE Design & Implementation
 */


#ifndef _BIKECOLLECTION_H
#define _BIKECOLLECTION_H

class BikeCollection {
public: 
	
/**
 * @param bike_id
 * @param bike_product_name
 */
void AddNewBike(String bike_id, String bike_product_name);
private: 
	RegisteredBike [*] registered_bikes_;
};

#endif //_BIKECOLLECTION_H