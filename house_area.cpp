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

house house1;
house1.setData(100,50);
house1.area();
 
 return 0;

}
