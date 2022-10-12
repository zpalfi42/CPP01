#include "Zombie.hpp"

void    namesFill(std::string   *names, int N)
{
    int i;

    i = 0;
    while (i < N)
    {
        while (42)
        {
            std::cout << "Name zombie number " << i << ": ";
            std::getline(std::cin, names[i]);
            if (names[i].empty())
                continue;
            else
                break ;
        }
        std::cout << "amount[N]: " << names[i] << std::endl;
        i++;
    }
}

int    getN( void )
{
    std::string index;
    int         N;
    int         i;

    while (42)
    {
        N = 0;
        i = 0;
        std::cout << "Insert number of zombies: ";
        std::getline(std::cin, index);
        index.erase(0, index.find_first_not_of(" \t\v\f\r"));
        while (std::isspace(index[index.length() - 1]))
            index.erase(index.find_last_not_of(" \t\v\r\f") + 1, index[index.length() - 1]);
        if (index.empty())
            continue ;
        while(index[i])
        {   
            if (index[i] < '0' || index[i] > '9')
            {
                std::cout << "Please enter a valid number >:(" << std::endl;
                N = 0;
                break ;
            }
            N = N * 10 + (index[i] - '0');
            i++;
        }
        if (N > 0)
            return (N);
    }
    return (0);
}

int main()
{
    typedef std::vector<Zombie::v>	zombie_v;
    int						N;

    N = getN();
    std::string names[N];

    namesFill(names, N);
    size_t const	names_size( sizeof(names) / sizeof(std::string) );
    zombie_v		zombies(names, names + names_size);

    // i = 0;
    // while (i < N)
    // {
    //     zombies[i].displayName();
    //     i++;
    // }
    return (0);
}