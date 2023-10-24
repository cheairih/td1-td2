#include <iostream>

using namespace std ;


int main() {
    int n=0 ;  
    do {
        if (n%2==0) {
            cout << n << " est pair\n" ;
            n += 3 ;
            continue ;
        }
        if (n%3==0) {
            cout << n << " est multiple de 3\n" ;
            n += 5 ; 
        }
        if (n%5==0) {
            cout << n << " est multiple de 5\n" ;
            break ; 
        }
        n += 1 ;
    }  while (1) ;
    return 0;
    //a boucle do-while s'exécute trois fois avant de se terminer lorsque n atteint la valeur de 20 et la boucle est interrompue.
}
