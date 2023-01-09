
#include<bits/stdc++.h>
using namespace std;


int factorial(int a){
        int fact=a;

        while(a>1){
           fact=fact*(a-1);
        a--;
        }
        return fact;
}


int main(){

        int first_num;
        
        cin>>first_num;

        cout<<factorial(first_num)<<endl;

}

	cout<<factorial(first_num)<<endl;

}
