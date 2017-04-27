#include <iostream>

using namespace std;
int func7(int a , int b){
    cout<< "Los valores de son :" << endl;
    cout<< "a: " <<a<< endl;
    cout<< "b: " <<b<< endl;
    int &r = a;
    int &y = b;
    cout<< "Los valores de invertidos son :" << endl;
    cout<< "a: " <<y<< endl;
    cout<< "b: " <<r<< endl;

}

int main()
{
    func7(23,5);
}
