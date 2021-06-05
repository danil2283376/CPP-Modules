#include <iostream>
#include <fstream>

int Error(std::string nameError)
{
    std::cout << nameError;
    return (1);
}

std::string ReplaceFindString(std::string buff, std::string str1, std::string str2)
{
    for (size_t i = 0; (i = buff.find(str1, i)) != std::string::npos; i += str2.length()) 
        buff.replace(i, str1.length(), str2);
    return (buff);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (Error("Error: argument!\n"));
    else
    {
        std::string filename = argv[1];
        std::string str1 = argv[2];
        std::string str2 = argv[3];

        std::ifstream fout(filename);
        if (fout == NULL || !fout.is_open())
        {
            std::cout << "Error: " << argv[1] << " not found!\n";
            fout.close();
            return (1);
        }
        filename += ".replace";
        std::ofstream fin(filename);
        if (fin == NULL || !fin.is_open())
        {
            std::cout << "Error: " << argv[1] << " not create!\n";
            fin.close();
            return (1);
        }
        std::string buff;
        while (1)
        {
            std::getline(fout, buff);
            buff = ReplaceFindString(buff, str1, str2);
            fin << buff;
            if (fout.eof())
                break ;
            fin << std::endl;
        }
        fout.close();
        fin.close();
        return (0);
    }
}