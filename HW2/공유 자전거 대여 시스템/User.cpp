#include "User.h"


User::User(string id, string password, string phone_number) {

}

void User::AddNewUser(string id, string password, string phone_number) {
	User* newUser = new User(id, password, phone_number);
}

vector<pair<string, string>> User::ListRentedBikes() {
    //return null;
}

void User::RentBike(string bike_id, string bike_product_name) {

}