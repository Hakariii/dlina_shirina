#include <iostream>

int main()
{
    int n,n1,cikl_lenght=0;
    std::cin >> n;
    n1 = n / 2;
    while (n < 4) {
        std::cout << "Number is lower than 4!";
        return 0;
    }
    while (cikl_lenght != n1 - 1) {
            cikl_lenght++;
                std::cout << "Dlina : " << n1 - cikl_lenght << " " << "Shirnia : " << cikl_lenght << "\n";
        }
    
}
