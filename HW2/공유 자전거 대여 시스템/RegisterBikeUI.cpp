#include "RegisterBikeUI.h"

void RegisterBikeUI::EnterBikeInfo(ifstream& input_file, ofstream& output_file) {
	string bike_id, bike_product_name;
	input_file >> bike_id >> bike_product_name;
	
	pregister_bike_->RegisterBikeInfo(bike_id, bike_product_name);

	// ��� ����
	output_file << "3.3. ������ ���" << endl;
	output_file << "> " << bike_id << " " << bike_product_name << endl << endl;
}