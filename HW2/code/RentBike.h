#ifndef _RENTBIKE_H
#define _RENTBIKE_H

#include"User.h"
#include "BikeCollection.h"

class RentBike {
public: 
	RentBike();
	~RentBike();
	void HandleRentBike(string bike_id, string& bike_product_name);
private: 
	User* puser_account_;
	BikeCollection* pbike_collection_;
};

#endif //_RENTBIKE_H