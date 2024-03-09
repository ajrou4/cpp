#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat G("majrou", 7);
    try{

        G.incrementGrade();
        G.decrementGrade();
        for(int i= 0; i <160 ; i++)
        {
           G.decrementGrade();
           G.incrementGrade();
        }
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<< std::endl;
    }
    return 0;
}
