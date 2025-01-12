#ifndef MYSEGMENT_H
#define MYSEGMENT_H



class MySegment
{
private:
    int x1;
    int y1;
    int x2;
    int y2;
public:
    MySegment(int x1=0, int y1=0, int x2=0, int y2=0);
    ~MySegment();

    void setX1(int x1);
    void setY1(int y1);
    void setX2(int x2);
    void setY2(int y2);

    int getX1();
    int getY1();
    int getX2();
    int getY2();

    void afisare();
    int len();

};

#endif // MYSEGMENT_H
