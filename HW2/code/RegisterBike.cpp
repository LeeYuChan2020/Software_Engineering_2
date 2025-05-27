#include "RegisterBike.h"

RegisterBike::RegisterBike() {
	padmin_ = new Admin();
}

RegisterBike::~RegisterBike() {
	delete padmin_;
}

void RegisterBike::RegisterBikeInfo(string bike_id, string bike_product_name) {
	padmin_->RegisterBike(bike_id, bike_product_name);;
}