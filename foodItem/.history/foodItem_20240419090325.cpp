#include "foodItem.h"
#include <string>

using namespace std;

void foodItem::setFoodInfo(string name, int qty, string measurement, int calories){
    this->name = name;
    this->qty = qty;
    this->measurment = measurement;
    this->calories = calories;
}


void foodItemSystem::insertAt(const foodItem& food_item, int length){
    list[length] = food_item;
    if(length == this->length)
        length++;
}