#include <iostream>

class Megaphone
{
    char *str;
    public:

    Megaphone()
    {

    }
    Megaphone(char *string) 
    {
        str = string;
    }
    void Input(char *string)
    {
        str = string;
    }
    void OutputUpper() 
    {
        int lengthSring = Length();
        for (int i = 0; i < lengthSring; i++) 
        {
            if (str[i] >= 97 && str[i] <= 122)
                std::cout << (char)(str[i] - 32);
            else
                std::cout << str[i];
        }
    }
    private:
    int Length()
    {
        int i = 0;
        while (str[i])
            i++;
        return (i);
    }
};

int main(int argc, char **argv) 
{
    if (argc != 1)
    {
        Megaphone *arr = new Megaphone[argc];
        for (int i = 1; i < argc; i++)
            arr[i].Input(argv[i]);
        for (int i = 1; i < argc; i++)
        {
            arr[i].OutputUpper();
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}