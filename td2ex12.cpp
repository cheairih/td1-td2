#include <iostream>
using namespace std;
class Test {
private:
    static int counter;

public:
    void call() {
        counter++;
    }

    static int getCallCount() {
        return counter;
    }
};

// Initialisation de la variable statique
int Test::counter = 0;

int main() {
    Test test1, test2, test3;

    test1.call();
    test2.call();
    test1.call();
    test3.call();

    int callCount = Test::getCallCount();
   cout << "La fonction 'call' a été appelée " << callCount << " fois." <<endl;

    return 0;
}

