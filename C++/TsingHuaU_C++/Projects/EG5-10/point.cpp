#include "point.h"
#include <iostream>
using namespace std;

int Point::cnt = 0;
Point::Point(const Point &p):x(p.x),y(p.y){
    cnt++;
}

void Point::showCount(){
    cout << "Object cnt=" << cnt << endl;
}
