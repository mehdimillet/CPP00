# include <iostream>

int main(int argc, char *argv)
{
    unsigned firsize = 0;
    const char fircustomization = '*';
    const unsigned firminsize = 5;
    const unsigned firmaxsize = 25;

    std::cout << "donne moi la taille du sapin entre [" << firminsize ", " << firmaxsize << "] : ";
    std::cin >> firsize;
    if (firsize < firminsize || firsize > firmaxsize)
        std::cerr << "arrete d'essayer de niquer mon programme" << std::endl;
    std::cout << std::endl;
    while (firsize > 0)
    {
        
    }
    
}