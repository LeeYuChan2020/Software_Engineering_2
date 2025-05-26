/**
 * Project SE Design & Implementation
 */


#ifndef _RENTBIKEUI_H
#define _RENTBIKEUI_H

class RentBikeUI {
public: 
	
/**
 * bikeID 값 입력 받기
 * bikeID , bikeProductName 함수로 값 받기
 * @param input_file
 * @param bike_id
 * @param bike_product_name
 */
void EnterBikeID(ofstream input_file, String bike_id, String bike_product_name);
private: 
	RentBike rent_bike_;
};

#endif //_RENTBIKEUI_H