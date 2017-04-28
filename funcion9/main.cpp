#include <iostream>

using namespace std;
void func9(int arry[],int s){
	int i,ma,temp;
	for(i=1;i<s;i++){
		ma=i;
		while(ma>0 && arry[ma]< arry[ma-1]){
			temp=arry[ma];
			arry[ma]=arry[ma-1];
			arry[ma-1]=temp;
			ma--;
		}
	}

	int j;
	for(j=0;j<s;j++){
		cout<<arry[j]<<" ";
	}
}


int main(){
	int a[10]={30,22,1,32,0,85,17,21,659};
    func9(a,10);

}
