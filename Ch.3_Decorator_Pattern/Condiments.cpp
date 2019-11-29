#include "Condiments.h"

Mocha::Mocha(Beverage *beverage)
{
    this->beverage = beverage;
}
std::string Mocha::getDescription()
{
    return beverage->getDescription() + ", Mocha";
}
double Mocha::cost()
{
    return beverage->cost() + 0.20;
}

Soy::Soy(Beverage *beverage)
{
    this->beverage = beverage;
}
std::string Soy::getDescription()
{
    return beverage->getDescription() + ", Soy";
}
double Soy::cost()
{
    return beverage->cost() + 0.20;
}

Whip::Whip(Beverage *beverage)
{
    this->beverage = beverage;
}
std::string Whip::getDescription()
{
    return beverage->getDescription() + ", Whip";
}
double Whip::cost()
{
    return beverage->cost() + 0.20;
}

SteamedMilk::SteamedMilk(Beverage *beverage)
{
    this->beverage = beverage;
}
std::string SteamedMilk::getDescription()
{
    return beverage->getDescription() + ", SteamedMilk";
}
double SteamedMilk::cost()
{
    return beverage->cost() + 0.20;
}