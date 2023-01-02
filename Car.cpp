#include "Car.h"


Car::Car(const std::string& type, int max_speed):_type(type), _max_speed(max_speed) {}
Car::Car() : _type("Sedan"), _max_speed(200) {}

int Car::getMaxSpeed()const {
	return _max_speed;
}

void Car::setMaxSpeed(int max_speed) {
	_max_speed = max_speed;
}

std::string& Car::getType() {
	return _type;
}

void Car::setType(std::string type) {
	_type = type;
}

brand::brand(const std::string& type, int max_speed, const std::string& color) : Car(type, max_speed), _color(color) {}

brand::brand(const std::string& color) : _color(color) {}

brand::brand()
{
}

std::string& brand::getColor()
{
	return _color;
}

void brand::setColor(std::string color)
{
	_color = color;
}

model::model(const std::string& type, const std::string& color, int price) : brand(color), _price(price) {}

model::model(){}

int model::getPrice()
{
	return _price;
}

void model::setPrice(int price)
{
	_price = price;
}
