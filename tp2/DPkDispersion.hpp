
#ifndef DPKKDISPERSION_H
#define DPKDISPERSION_H

#include "instance.hpp"


class DPkDispersion {
    
    protected:

    Instance instance;
    std::vector<int>  solution;
    int N;
    int K;

    float OPT;
    int lastIndex;

    float dist(int i, int ii){return instance.distance(i, ii, 1.0);};

    public:

    void importInstance(std::string filename);
    void clearOPT();
    void display();

    void setK(int k) {K = k;};
    float getOPT() {return OPT;}

    void solve();

};

#endif
