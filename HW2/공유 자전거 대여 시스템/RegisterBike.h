#ifndef _REGISTERBIKE_H
#define _REGISTERBIKE_H

#include "Admin.h"
#include <string>
using namespace std;

class RegisterBike {
public: 
	void RegisterBikeInfo(string bike_id, string bike_product_name);
private: 
	Admin* padmin_;
};

#endif //_REGISTERBIKE_H