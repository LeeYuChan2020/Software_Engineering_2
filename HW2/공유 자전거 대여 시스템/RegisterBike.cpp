#include "RegisterBike.h"

void RegisterBike::RegisterBikeInfo(string bike_id, string bike_product_name) {
	padmin_->RegisterBike(bike_id, bike_product_name);;
}