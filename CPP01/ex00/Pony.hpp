#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
    public:
        Pony();
        Pony(std::string namePony, int widthPony, int heightPony);
        void outputInfo();

    private:
        std::string namePony;
        int widthPony;
        int heightPony;
};
#endif