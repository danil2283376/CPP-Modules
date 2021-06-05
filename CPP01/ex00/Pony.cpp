#include "Pony.hpp"

Pony::Pony() {}

Pony::Pony(std::string namePony, int widthPony, int heightPony) 
    : namePony(namePony), widthPony(widthPony), heightPony(heightPony)
{
    
}

void Pony::outputInfo()
{
    std::cout << "Name: " << this->namePony << ","
            << "Width: " << this->widthPony << "," << "Height: "
                << this->heightPony << std::endl;
}