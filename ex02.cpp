#include<iostream>
#include<iomanip>
using namespace std;
int suma_array(int* a, int size){
    int razem=*a;
    int i=0;
    int *p=a;
    
    for (int i = 1; i < size; i++) {
        razem= razem + *p;
        *p++;
    }
    return razem;
}

int main(){
    int tab[5]={4,7,3,6,4};
    int *r=&tab[0];
     int tab2[5]={6,4,6,4,6};
    int *s=&tab2[0];
cout<<suma_array(r,5)<<endl<<suma_array(s,5);
}