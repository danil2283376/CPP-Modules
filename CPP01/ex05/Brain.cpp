#include "Brain.hpp"

Brain::Brain()
{
    this->weight = 0;
    this->height = 0;
}

Brain::Brain(int weight, int height) : weight(weight), height(height)
{

}

std::string Brain::identify()
{
    std::stringstream z;
    z << this;
    return (z.str());
}