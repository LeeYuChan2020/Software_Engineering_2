#include "User.h"

User::User() {
	pbike_info_collection_ = new BikeInfoCollection();
	id_ = "";
	password_ = "";
	phone_number_ = "";
}

User::User(string id, string password, string phone_number) {
	pbike_info_collection_ = new BikeInfoCollection();
	id_ = id;
	password_ = password;
	phone_number_ = phone_number;
}

User::~User() {
	delete pbike_info_collection_;
}

void User::AddNewUser(string id, string password, string phone_number) {
	User* newUser = new User(id, password, phone_number);
}

//gets a list of all rented bikes from bikeInfoCollection
vector<pair<string, string>> User::ListRentedBikes() {
	vector<pair<string, string>> list;

	pair<string, string> info = pbike_info_collection_->FindFirst();
	if (info.first == "") return list;

	list.push_back(info);

	while (true) {
		info = pbike_info_collection_->GetNext();
		if (info.first == "") break;
		list.push_back(info);
	}
	return list;
}

void User::RentBike(string bike_id, string bike_product_name) {
	pbike_info_collection_->AddRentedBikeInfo(bike_id, bike_product_name);
}