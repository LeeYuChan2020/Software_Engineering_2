#ifndef _BIKEINFOCOLLECTION_H
#define _BIKEINFOCOLLECTION_H

#include "BikeInfoForUser.h"
#include <string>
#include <vector>
using namespace std;

class BikeInfoCollection {
public: 
	pair<string, string> FindFirst();
	pair<string, string> GetNext();
	void AddRentedBikeInfo(string bike_id, string bike_product_name);
private: 
	vector<BikeInfoForUser*> bike_info_;
	int current_index_ = -1;
};

#endif //_BIKEINFOCOLLECTION_H