#include "RegisterBikeUI.h"

RegisterBikeUI::RegisterBikeUI() {
	pregister_bike_ = new RegisterBike();
}

RegisterBikeUI::~RegisterBikeUI() {
	delete pregister_bike_;
}

void RegisterBikeUI::EnterBikeInfo(ifstream& input_file, ofstream& output_file) {
	string bike_id, bike_product_name;
	input_file >> bike_id >> bike_product_name;

	pregister_bike_->RegisterBikeInfo(bike_id, bike_product_name);

	// ��� ����
	output_file << "3.1. ������ ���" << endl;
	output_file << "> " << bike_id << " " << bike_product_name << endl << endl;
}