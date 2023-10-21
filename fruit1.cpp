#include<iostream>
using namespace std;
class fruits{
    public:
    fruits(){

    }
    virtual void taste(){

    }
};
class mango: public fruits{
    public:
        void taste(){
            cout<<"APple taste is sweet ";
        }
        void juice(){
            cout<<"we can make juice of it ";
        }
};
class apple: public fruits{
    public:
        void taste(){
            cout<<"Taste of apple is also sweet ";
        }
        void slice(){
            cout<<"we can make slice of it ";
        }
};
int main(){
    fruits *s=new apple;
    s->taste();
    fruits l;
    apple a;
    mango m;
    fruits *basket[4];
    basket[0]=&l;
    basket[1]=&a;
    basket[2]=&m;
    for(int i=0;i<4;i++){
        basket[i]->taste();
        if((typeid(*basket[i]))==typeid(mango)){
            mango *obj=dynamic_cast<mango*>(basket[i]);
            obj->juice();
        }
        else if((typeid(*basket[i]))==typeid(apple)){
            apple *obj=dynamic_cast<apple*>(basket[i]);
            obj->slice();
        }
    }
    
}