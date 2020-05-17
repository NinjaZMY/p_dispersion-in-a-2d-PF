#ifndef INSTANCE_H
#define INSTANCE_H

#include <vector>
#include <iostream>
#include <utility>

class Instance {

	private:

    std::vector<std::pair<float, float>> points;
//    int N;


    public:
    //Instance();
    void import(std::string filename);
    void display();
    int getSize();

    float distance(int i, int ii);
    float distance(int i, int ii, float a);
    std::pair<float, float> getPoint(int i){return points[i];};

};

#endif
