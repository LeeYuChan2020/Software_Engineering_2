/**
 * Project SE Design & Implementation
 */


#ifndef _REGISTERBIKEUI_H
#define _REGISTERBIKEUI_H

class RegisterBikeUI {
public: 
	
/**
 * @param input_file
 * @param bike_id
 * @param bike_product_name
 */
void EnterBikeInfo(ofstream input_file, String bike_id, String bike_product_name);
private: 
	RegisterBike register_bike_;
};

#endif //_REGISTERBIKEUI_H