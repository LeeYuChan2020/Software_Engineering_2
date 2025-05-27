/**
 * Project SE Design & Implementation
 */


#include "RentBikeUI.h"

/**
 * RentBikeUI implementation
 */


/**
 * bikeID 값 입력 받기
 * bikeID , bikeProductName 함수로 값 받기
 * @param input_file
 * @param output_file
 */
void RentBikeUI::EnterBikeID(InputStream input_file, OutputStream output_file) {
	string bike_id, bike_product_name;
	input_file >> bike_id >> bike_product_name;

	pregister_bike_->RegisterBikeInfo(bike_id, bike_product_name);

	// 출력 형식
	output_file << "3.3. 자전거 등록" << endl;
	output_file << "> " << bike_id << " " << bike_product_name << endl << endl;
}