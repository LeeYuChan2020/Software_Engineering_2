#ifndef _BIKEINFOCOLLECTION_H
#define _BIKEINFOCOLLECTION_H

#include "BikeInfoForUser.h"
#include <string>
using namespace std;

class BikeInfoCollection {
public: 
	pair<string, string> FindFirst();
	pair<string, string> GetNext();
	void AddRentedBikeInfo(string bike_id, string bike_product_name);
private: 
	BikeInfoForUser bike_info_[];
};

#endif //_BIKEINFOCOLLECTION_H