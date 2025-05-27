#ifndef _USER_H
#define _USER_H
#include <vector>
#include <string>
#include "Member.h"
using namespace std;


class User: public Member {
public: 
	User(string id, string password, string phone_number);
	void AddNewUser(string id, string password, string phone_number);
	vector<pair<string, string>> ListRentedBikes();
	void RentBike(string bike_id, string bike_product_name);
private: 
	string phone_number_;
	//BikeInfoCollection bike_info_collection_;
};

#endif //_USER_H