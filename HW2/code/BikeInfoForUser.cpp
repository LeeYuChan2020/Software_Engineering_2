#include "BikeInfoForUser.h"

BikeInfoForUser::BikeInfoForUser(string bike_id, string bike_product_name) {
    id_ = bike_id;
    product_name_ = bike_product_name;
}

pair<string, string> BikeInfoForUser::get_bike_info() {
    pair<string, string> bike_info = { id_, product_name_ };
    return bike_info;
}