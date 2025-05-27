#include "Admin.h"

void Admin::RegisterBike(string bike_id, string bike_product_name) {
	pbike_collection_->AddNewBike(bike_id, bike_product_name);
}