/* File: example.cpp */

#include <example.h>

std::string example::getKey(){
    return key;
}
        
std::vector<int> example::getValues(){
    return values;
}
        
void example::setKey(std::string key){
    this->key = key;
}
        
void example::setValue(int value){
    this->values.push_back(value);
}
