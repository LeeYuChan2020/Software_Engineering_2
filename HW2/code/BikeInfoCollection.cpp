#include "BikeInfoCollection.h"

pair<string, string> BikeInfoCollection::FindFirst() {
    if (bike_info_.size() > 0)
    {
        current_index_ = 0;
        return bike_info_[current_index_]->get_bike_info();
    }
    return make_pair("", "");
}

pair<string, string> BikeInfoCollection::GetNext() {
    current_index_++;
    if (current_index_ < bike_info_.size()) {
        return bike_info_[current_index_]->get_bike_info();
    }
    return make_pair("", "");
}

void BikeInfoCollection::AddRentedBikeInfo(string bike_id, string bike_product_name) {
    BikeInfoForUser* newInfo = new BikeInfoForUser(bike_id, bike_product_name);
    bike_info_.push_back(newInfo);
}