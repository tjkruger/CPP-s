#include <fstream>

int main(int ac, char **av)
{
    
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream infile(av[1]);
    if (ac != 4)
        return 1;
    if (!infile.is_open())
        return 1;
    std::string content((std::istreambuf_iterator<char>(infile)),
                     std::istreambuf_iterator<char>());
    size_t  pos;
    while((pos = content.find(s1)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
    }
    std::ofstream outfile(std::string(av[1]) + ".replace");
    outfile << content;
}