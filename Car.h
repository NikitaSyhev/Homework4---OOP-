#pragma once
#include <string>
class Car
{
public:
	
	Car(const std::string& type, int max_speed);
	Car();
	int getMaxSpeed()const;
	void setMaxSpeed(int max_speed);
	std::string& getType();
	void setType(std::string type);

private:
	std::string _type;
	int _max_speed;

};
class brand : public Car {
public:
	brand(const std::string& type, int max_speed, const std::string& color);
	brand(const std::string& color);
	brand();
	std::string& getColor();
	void setColor(std::string color);

private:

	std::string _color;


};

class model : public brand {
public:
	model(const std::string& type, const std::string& color, int price);
	model();
	int getPrice();
	void setPrice(int price);


private:

	int _price;

};


