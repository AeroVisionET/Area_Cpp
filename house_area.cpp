#include <iostream>
#include <string>

using namespace std;

class house
{
private:
    int length = 0;
    int breadth = 0;
public:
    void setData(int x, int y)
    {
        length = x;
        breadth = y;
    }

    void area()
    {
        cout<<"The area is: "<<length * breadth;
    }


};

int main()
{

house house;
house.setData(100,50);
house.area();
 
 return 0;

}
