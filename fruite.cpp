#include<iostream>
using namespace std;
class fruits{
    public:
        virtual void taste(){
            cout<<"\nThere is no taste:\n ";
        }
};
class mango: public fruits{
    public :
    void taste(){
        cout<<"\nTaste is sweet :\n";

    }
    void pulp(){
        cout<<"\nWe can also make pulp of it\n ";
    }

};
class apple: public fruits{
    public:
        void taste(){
        cout<<"\nits taste is sweet\n";
        }
        void juice(){
            cout<<"\nWe can make juice of it \n";
        }
};
int main(){
    apple a;

    mango m;
    
    fruits f;
    fruits *basket[4];
    basket[0]=&a;
    basket[1]=&f;
    basket[2]=&m;
    
    for(int i=0;i<4;i++){
        basket[i]->taste();
        if((typeid(*basket[i]))==typeid(apple)){
            cout<<"reading apple data ";
            apple *obj=dynamic_cast<apple *>(basket[i]);
            obj->juice();
        }     
        if((typeid(*basket[i]))==typeid(mango)){
            cout<<"Reading mango data";
            mango *obj1=dynamic_cast<mango *>(basket[i]);
            obj1->pulp();
        }   

    }

}