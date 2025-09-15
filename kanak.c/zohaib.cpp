#include<cmath>
#include<iostream>
using namespace std;
class point{
    public:
    int x,y;
    float distance(int a,int b){
        float dist ;
        dist = sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
        return dist;

    }
};
int main(){
    point p1,p2;
    cout<<" enter the x and y of first point\n";
    cin>>p1.x>>p1.y;
    cout<<" enter the x and y of second point\n";
    cin>>p2.x>>p2.y;
    float d;
    d= p1.distance(p2.x,p2.y);
    cout<<"distance btw points:"<<d;
    return 0;

}                      