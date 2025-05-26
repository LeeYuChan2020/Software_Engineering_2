/**
 * Project SE Design & Implementation
 */


#ifndef _ADMIN_H
#define _ADMIN_H

#include "Member.h"


class Admin: public Member {
public: 
	
/**
 * @param bike_id
 * @param bike_product_name
 */
void RegisterBike(String bike_id, String bike_product_name);
private: 
	BikeCollection bike_collection_;
};

#endif //_ADMIN_H