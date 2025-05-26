/**
 * Project SE Design & Implementation
 */


#ifndef _USER_H
#define _USER_H

#include "Member.h"


class User: public Member {
public: 
	
/**
 * @param id
 * @param password
 * @param phone_number
 */
void User(String id, String password, String phone_number);
	
/**
 * @param id
 * @param password
 * @param phone_number
 */
void AddNewUser(String id, String password, String phone_number);
	
StringPair[*] ListRentedBikes();
	
/**
 * @param bike_id
 * @param bike_product_name
 */
void RentBike(String bike_id, String bike_product_name);
private: 
	String phone_number_;
	BikeInfoCollection bike_info_collection_;
};

#endif //_USER_H