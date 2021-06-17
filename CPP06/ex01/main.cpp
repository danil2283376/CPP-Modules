#include <iostream>

struct Data
{
    std::string str1;
    int num;
    std::string str2;
};

// КОРОЧЕ ВСЕ ПРОСТО КАК 2*2=4,
// У нас есть строка из символов это, предположим
// char *str[16];
// положил в первые 8 символов символы из ASCII.
// 9 символом с помощью reinterpreter_cast<int *> в массив символов положил число.
// в следующие после 9 символа снова положил числа.
// БРЕД ПОЛНЫЙ Я ПОНИМАЮ, САМ В ШОКЕ (по предположениям такой каст не когда не буду/будешь использовать) ==>
// Because some shit.
//                            8байт    4байта    4 байта
// пример что происходит тут: ABCDEFGH 228(int)  JKLM
void *serialize(void)
{
    char *str = new char[16];
    int tableAscii = 65;
    for (int i = 0; i < 8; i++)
    {
        str[i] = tableAscii;
        tableAscii++;
    }
    *reinterpret_cast<int *>(str + 8) = 228;
    tableAscii++;
    for (int i = 12; i < 16; i++)
    {
        str[i] = tableAscii;
        tableAscii++;
    }
    return (static_cast<void *>(str));
}

Data *deserialize(void *raw)
{
    Data *data = new Data;

    data->str1 = std::string(static_cast<char *>(raw), 8);
    data->num = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
    data->str2 = std::string(static_cast<char *>(raw) + 12, 4);
    return (data);
}

int main()
{
    void *raw = serialize();
    Data *data = deserialize(raw);

    std::cout << data->str1 << "\n";
    std::cout << data->num << "\n";
    std::cout << data->str2 << "\n";
}