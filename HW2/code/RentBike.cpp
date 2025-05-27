#include "RentBike.h"

RentBike::RentBike() {
	pbike_collection_ = new BikeCollection();
	puser_account_ = new User();
}

RentBike::~RentBike() {
	delete pbike_collection_;
	delete puser_account_;
}

void RentBike::HandleRentBike(string bike_id, string& bike_product_name) {
	bike_product_name = pbike_collection_->FindAndGetProductName(bike_id);
	puser_account_->RentBike(bike_id, bike_product_name);
}