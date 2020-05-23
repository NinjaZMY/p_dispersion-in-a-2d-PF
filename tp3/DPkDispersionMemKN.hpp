
#ifndef DPKKDISPERSIONMEMKN_H
#define DPKDISPERSIONMEMKN_H

#include "DPkDispersion.hpp"
#include <vector> 
	


class DPkDispersionMemKN : public DPkDispersion {
    
    public:
    void createMatrixDP();
    void solve();

    
    protected:

    float** matrixDP;
		
		
    std::pair<float, int> computeCase(int k, int i);

	void deleteMatrixDP();

	void fillLign(int k);
	void fillresult();

	void fillFirstLine();
	void backtrack();


};

#endif
