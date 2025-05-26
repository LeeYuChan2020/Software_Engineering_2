/**
 * Project SE Design & Implementation
 */


#ifndef _BIKEINFOCOLLECTION_H
#define _BIKEINFOCOLLECTION_H

class BikeInfoCollection {
public: 
	
String[2] FindFirst();
	
String[2] GetNext();
	
/**
 * @param bike_id
 * @param bike_product_name
 */
void AddRentedBikeInfo(String bike_id, String bike_product_name);
private: 
	BikeInfoForUser[*] bike_info_;
};

#endif //_BIKEINFOCOLLECTION_H