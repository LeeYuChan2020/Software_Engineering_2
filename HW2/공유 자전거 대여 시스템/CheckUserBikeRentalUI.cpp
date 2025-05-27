#include "CheckUserBikeRentalUI.h"


void CheckUserBikeRentalUI::StartInterface(const vector<pair<string, string>>& rented_bike_info) {
	for(int i = 0; i < rented_bike_info.size(); i++) {
		*poutput_file_ << rented_bike_info[i].first << " " << rented_bike_info[i].second << endl;
	}
}

void CheckUserBikeRentalUI::SetOutputFile(ofstream& output_file) {
	poutput_file_ = &output_file;
	pcheck_user_bike_rental_->CheckUserBikeRentalList();
}