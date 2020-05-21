//#include <chrono>

#include "DPkDispersionMemKN.hpp"
#include <chrono> 

using namespace std;

int main(int argc, char **argv) {
	  int k = 3;
	    string filename;
	//    filename = "../data/dataAlea2_50/dataAlea2_50_ex1.txt";
	    //filename = "../data/dataAlea2_5000/dataAlea2_5000_ex1.txt";
	    filename = "data.txt";

	   if(argc > 1) k = atoi(argv[1]);
	    if(argc > 2) filename = argv[2];
	    DPkDispersionMemKN solver3;

	    solver3.importInstance(filename);
		solver3.createMatrixDP();
		
		/*Faire le Set du K  avec une valeur Aleatoire entre ]3,N] 
		srand (time(NULL));
	    int x=rand()%(N-3)+4;//
		solver3.setK(x);
		cout <<" K = " << K<< endl;
		*/	
		
	    cout << "Contructeur fini\n"; // "k = "<< k << "\n";
	    std::chrono::time_point<std::chrono::system_clock> start, end;
		start = std::chrono::system_clock::now();
		solver3.solve();
		end = std::chrono::system_clock::now();
	    solver3.display();
	    cout << "REsolution terminee en  "<< std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() <<" ms\n";
		
	return 0;
}
