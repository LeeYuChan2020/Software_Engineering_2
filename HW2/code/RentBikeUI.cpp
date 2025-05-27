#include "RentBikeUI.h"

RentBikeUI::RentBikeUI() {
	prent_bike_ = new RentBike();
}

RentBikeUI::~RentBikeUI() {
	delete prent_bike_;
}

void RentBikeUI::EnterBikeID(ifstream& input_file, ofstream& output_file) {
	string bike_id, bike_product_name;
	input_file >> bike_id;
	
	prent_bike_->HandleRentBike(bike_id, bike_product_name);

	// 출력 형식
	output_file << "4.1. 자전거 대여" << endl;
	; output_file << "> " << bike_id << " " << bike_product_name << endl << endl;
}