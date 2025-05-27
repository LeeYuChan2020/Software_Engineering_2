#include "BikeCollection.h"

BikeCollection::BikeCollection() {
}

BikeCollection::~BikeCollection() {
	for (auto bike : registered_bikes_) {
		delete bike;
	}
	registered_bikes_.clear();
}

void BikeCollection::AddNewBike(string bike_id, string bike_product_name) {
	RegisteredBike* newBike = new RegisteredBike(bike_id, bike_product_name);
	registered_bikes_.push_back(newBike);
}

string BikeCollection::FindAndGetProductName(string bike_id) {
	for(size_t i = 0; i < registered_bikes_.size(); i++) {
		if (registered_bikes_[i]->get_id() == bike_id) {
			return registered_bikes_[i]->get_product_name();
		}
	}
}