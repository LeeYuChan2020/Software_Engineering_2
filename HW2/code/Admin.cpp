#include "Admin.h"

Admin::Admin(){
	pbike_collection_ = new BikeCollection();
}

Admin::~Admin() {
	delete pbike_collection_;
}

void Admin::RegisterBike(string bike_id, string bike_product_name) {
	pbike_collection_->AddNewBike(bike_id, bike_product_name);
}