
#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;


class Point {
    public:
        Point(int x=0, int y=0): x(x), y(y){}
        Point(const Point &p);
        ~Point() { cnt--; }

        int getX() const { return x; }
        int getY() const { return y; }
        static void showCount();
    private:
        int x, y;
        static int cnt;
};

int Point::cnt = 0;
Point::Point(const Point &p):x(p.x),y(p.y){
    cnt++;
}

void Point::showCount(){
    cout << "Object cnt=" << cnt << endl;
}
#endif
