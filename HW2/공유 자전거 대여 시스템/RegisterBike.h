/**
 * Project SE Design & Implementation
 */


#ifndef _REGISTERBIKE_H
#define _REGISTERBIKE_H

class RegisterBike {
public: 
	
/**
 * @param bike_id
 * @param bike_product_name
 */
void RegisterBikeInfo(String bike_id, String bike_product_name);
private: 
	Admin admin_;
};

#endif //_REGISTERBIKE_H