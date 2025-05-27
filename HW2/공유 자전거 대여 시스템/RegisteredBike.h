#ifndef _REGISTEREDBIKE_H
#define _REGISTEREDBIKE_H

#include "Bike.h"
#include <string>
using namespace std;

class RegisteredBike: public Bike {
public: 
	RegisteredBike(string bike_id, string bike_product_name);
};

#endif //_REGISTEREDBIKE_H