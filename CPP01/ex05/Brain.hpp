#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>

class Brain
{
    public:
        Brain();
        Brain(int weight, int height);
        std::string identify();
    private:
        int weight;
        int height;
};

#endif