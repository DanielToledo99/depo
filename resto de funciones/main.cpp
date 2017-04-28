#include <iostream>

using namespace std;

int func14(int total, int score[], int res=0){
    if(total != 0){
        res = res + score[total-1];
        total--;
        return func14(total, score, res);
    }
    cout << res << endl;
    return 0;
}
bool func15(char* letra, int tam){
    int cont;
    cont = tam/2;
    int ult;
    ult = (tam-1);
    for(int i=0; i<cont; i++){
        if(letra[i] != letra[ult]){
            cout << false << endl;
            return false;
        }
        else{
            ult--;
        }
    }
    cout << true << endl;
    return true;
}
int main(){
    int score[5]= {12,324,4,234,2};
    func14(5,score);
    func15("oo", 2);
}

