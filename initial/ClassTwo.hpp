#ifndef __CLASSTWO_H_
#define __CLASSTWO_H_

class ClassTwo {
    int x;
    int y;
    public:
        ClassTwo();
        ClassTwo(int);
        ClassTwo(int, int);
        int getX();
        int getY();
};

ClassTwo* factory(int, int);

#endif // __CLASSTWO_H_
