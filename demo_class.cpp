#include <iostream>

using namespace  std;

class car
{
    public:
    
    string carname;
    int carspeed;
    
    void set_carspec();
    void get_carspec();
    
};

void car::set_carspec()
{
    cout<<"enter a car name"<<endl;
    cin>>carname;
    cout<<"enter a car speed"<<endl;
    cin>>carspeed;

}

void car::get_carspec()
{
    cout<<"your car name "<<carname<<endl;
   
    cout<<"your car speed "<<carspeed<<endl;
    

}



int main()
{
    car ptr;

    ptr.set_carspec();
    ptr.get_carspec();
        
    return 0;
}
