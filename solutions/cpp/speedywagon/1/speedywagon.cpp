#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor* sensor){
    return sensor != nullptr;
}

int activity_counter(pillar_men_sensor* sensor_array, int capacity){
    int sum{0};

    for(int i = 0; i < capacity; i++){
        sum += (sensor_array + i)->activity;
    }
    
    return sum;
}

bool alarm_control(pillar_men_sensor* sensor){
    if(!connection_check(sensor)) return false;
    return sensor->activity > 0;
}

bool uv_alarm(pillar_men_sensor* sensor){
    if(!connection_check(sensor)) return false;
    return uv_light_heuristic(&sensor->data) > sensor->activity;
}

    
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
