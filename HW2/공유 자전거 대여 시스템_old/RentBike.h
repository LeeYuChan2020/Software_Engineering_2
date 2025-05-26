/**
 * Project SE Design & Implementation
 */


#ifndef _RENTBIKE_H
#define _RENTBIKE_H

class RentBike {
public: 
	
/**
 * findAndShowBikeInfo(id, name)
 * 
 * @param bike_id
 * @param bike_product_name
 */
void HandleRentBike(String bike_id, String bike_product_name);
private: 
	User user_account_;
	RegisteredBike registered_bike_;
};

#endif //_RENTBIKE_H