#include "CheckUserBikeRental.h"


void CheckUserBikeRental::CheckUserBikeRentalList() {
	vector<pair<string, string>> rented_bike_info;
	rented_bike_info = puser_account_->ListRentedBikes();
	pcheck_ubr_ui_->StartInterface(rented_bike_info);
};