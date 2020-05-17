#include "DPkDispersion.hpp"

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


void DPkDispersion::importInstance(string filename){
	instance.import(filename);
	N = instance.getSize();
//    lastIndex = -1;
    OPT = -1.0;
}

void DPkDispersion::display() {
	instance.display();
    cout << "\nN= " << N << " , K= " << K << " , OPT=" << OPT  << endl;

	 cout<<"\nSelection des points:\n";
	 for (vector<int>::iterator it2 = solution.begin() ; it2 != solution.end(); ++it2){
		 cout  << *it2 << " ";
	 }
	 cout <<endl<<endl;
}

void DPkDispersion::clearOPT(){
	solution.clear();
    lastIndex = -1;
    OPT = -1.0;
}



