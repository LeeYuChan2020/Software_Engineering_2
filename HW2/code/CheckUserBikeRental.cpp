#include "CheckUserBikeRental.h"

CheckUserBikeRental::CheckUserBikeRental() {
	pcheck_ubr_ui_ = nullptr;
	puser_account_ = new User();
}

CheckUserBikeRental::~CheckUserBikeRental() {
	delete puser_account_;
}

//gets Interface pointer not to happen stack overflow
void CheckUserBikeRental::get_ui(CheckUserBikeRentalUI* ptr) {
	pcheck_ubr_ui_ = ptr;
}

void CheckUserBikeRental::CheckUserBikeRentalList() {
	vector<pair<string, string>> rented_bike_info;
	rented_bike_info = puser_account_->ListRentedBikes();
	pcheck_ubr_ui_->StartInterface(rented_bike_info);
};