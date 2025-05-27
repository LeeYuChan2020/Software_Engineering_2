#ifndef _BIKECOLLECTION_H
#define _BIKECOLLECTION_H

#include "RegisteredBike.h"
#include <vector>
#include <string>
using namespace std;


class BikeCollection {
public: 
	BikeCollection();
	~BikeCollection();
	void AddNewBike(string bike_id, string bike_product_name);
	string FindAndGetProductName(string bike_id);
private: 
	vector<RegisteredBike*> registered_bikes_;
};

#endif //_BIKECOLLECTION_H