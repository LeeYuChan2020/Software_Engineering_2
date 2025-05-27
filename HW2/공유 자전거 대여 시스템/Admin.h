#ifndef _ADMIN_H
#define _ADMIN_H
#include "Member.h"
#include "BikeCollection.h"
#include <string>
using namespace std;

class Admin: public Member {
public: 
	void RegisterBike(string bike_id, string bike_product_name);
private: 
	BikeCollection* pbike_collection_;
};

#endif //_ADMIN_H