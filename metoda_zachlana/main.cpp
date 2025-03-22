#include<iostream>



int main()
{
    const int N=6;
    int Nom = {50,20,10,10,5,2,1};
    int Reszta[N]={0};
    int kwota ;
    std::cout << "Podaj kwotę";
    std::cin >> kwota;
    for(int i=0 ; i<N ; i++){
        Reszta[i]=kwota/nom[i];
        kwota=kwota%nom[i];

    }
    for(int i=0 ; i<N ; i++){
        if(Reszta[i]>0)
            std::cout<< Nom[i] << " : " << Reszta[i];
    }


    return 0;
}