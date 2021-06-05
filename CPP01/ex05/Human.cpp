#include "Human.hpp"

Human::Human()
{
    this->brain = Brain();
}

std::string    Human::identify()
{
    return (this->brain.identify());
}

Brain  &  Human::getBrain()
{
    return (this->brain);
}