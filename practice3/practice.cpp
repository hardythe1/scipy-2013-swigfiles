
#include "practice.h"

Person::Person(){
}
void Person::setName(std::string name){
    this->name = name;
}

std::string Person::getName(){
    return this->name;
}

void Person::setAge(int age){
    this->age = age;
}

int Person::getAge(){
    return this->age;
}

void Person::setSex(char sex){
    this->sex = sex;
}

char Person::getSex(){
    return this->sex;
}

void Person::addHobby(std::string hobby){
    this->hobbies.push_back(hobby);
}
n
std::vector<std::string> Person::getHobbies(){
    return this->hobbies;
}


void Person::operator+(std::string hobby){
    this->hobbies.push_back(hobby);
}

void Person::operator-(std::string hobby){
    int i ;
    for(i = 0 ;i <  this->hobbies.size();i++){
        if (this->hobbies[i] == hobby){
            this->hobbies.erase(this->hobbies.begin()+i,this->hobbies.begin()+i+1);
        }
    }
}
