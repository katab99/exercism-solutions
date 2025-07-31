#include "doctor_data.h"
namespace heaven {
    Vessel::Vessel(std::string name, int generation, star_map::System current_system) 
    : name(name), generation(generation), current_system(current_system){}
    
    Vessel Vessel::replicate(std::string name){
        return Vessel {name, this->generation + 1, current_system};
    }
    
    void Vessel::make_buster(){
        this->busters++;
    }
    
    bool Vessel::shoot_buster(){
        if(this->busters > 0){
            this->busters--;
            return true;
        }
    
        return false;
    }
    
    std::string get_older_bob(Vessel v1, Vessel v2){
        if(v1.generation < v2.generation) return v1.name;
        return v2.name;
    }
    
    bool in_the_same_system(Vessel v1, Vessel v2){
        return v1.current_system == v2.current_system;
    }

}