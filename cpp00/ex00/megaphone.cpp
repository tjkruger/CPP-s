#include <iostream>
#include <cctype>

int main(int c, char **v)
{
    int i = 1;
    int j = 0;
    if(c == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    while(i < c)
    {
        j = 0;
        std::string result = "";
        while(v[i][j] != '\0')
        {
            result += std::toupper(v[i][j]);
            j++;
        }

        std::cout << result;

        i++;
    }
    std::cout << std::endl;
    return(0);
}