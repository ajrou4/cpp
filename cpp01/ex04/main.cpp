#include <iostream>
#include <fstream>
#include <string>

void    irplace( std::string &str, size_t pos, size_t len, std::string s2)
{
    str.erase(pos, len);
    str.insert(pos, s2);

}
void Myreplacefile( std::string& filename, std::string& s1, std:: string& s2)
{
    std::ifstream inputFile(filename);
    if(!inputFile.is_open())
    {
        std::cerr << "cannot open" << filename <<std::endl;
        return;
    }
    std::string outfilename = filename + ".replace";

    std:: ofstream outputFile(outfilename);
    if(!outputFile.is_open())
    {
        std::cerr << "cannot open" << outfilename << std::endl;
        inputFile.close();
        return;
    }
    std::string line;

    while(std::getline(inputFile, line, '\0'))
    {
        if(line.empty())
        {
            std::cout << "file empty !!"<< std::endl;
            return;
        }
            size_t pos = 0;
            while ((pos = line.find(s1, pos)) != std::string::npos) 
            {
                irplace(line, pos, s1.length(), s2) ;
                pos += s1.length();
            }
            outputFile <<line <<'\n';   
        }
    inputFile.close();
    outputFile.close();
}

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cerr << "Usage: " << av[0] <<" 'filename' 'S1' 'S2' " <<std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string S1 = av[2];
    std::string S2 = av[3];
    Myreplacefile(filename, S1, S2);  
    return 0;
}

