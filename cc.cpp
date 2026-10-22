#include<bits/stdc++.h>
using namespace std;
class ptb2{
    private:
    float a,b,c;
    public:
    ptb2(){
        a=0;b=0;c=0;
    }
    ptb2(float a1,float b1,float c1){
        a=a1;
        b=b1;c=c1;
    }
    void xuat(){
        cout <<a<<"x^2"<<" + "<<b<<"x + "<<c<<endl;
    }
    void doi_dau(){
        a=-a;
        b=-b,c=-c;
    }
    void add(ptb2 first,ptb2 second){
        a=first.a+second.a;
        b=first.b+second.b;
        c=first.c+second.c;
    }
};
int main(){
    ptb2 pt(4,3,2);
    pt.xuat();
    pt.doi_dau();
    pt.xuat();
    ptb2 pti(9,3,6);
    ptb2 ptj;
    ptj.add(pti,pt);
    ptj.xuat();
}