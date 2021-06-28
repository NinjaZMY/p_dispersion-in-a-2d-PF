# p_dispersion-in-a-2d-PF
this is a repository showing programs that translate the p-dispersion in a 2d pareto front algorithms , 

I'm not covering all the alogrithms , but a portion of them ! 

Ressources for the algorithms : 
1. http://formation.u-psud.fr/courses/TERCLUSTERINGM1INFON/document/seance2/seance2.pdf?cidReq=TERCLUSTERINGM1INFON 
2. https://www.researchgate.net/profile/Nicolas_Dupin/publication/336856042_The_p-dispersion_problem_is_efficiently_solvable_in_polynomial_time_in_a_2d_Pareto_Front/links/5db8c350299bf1a47bfd4998/The-p-dispersion-problem-is-efficiently-solvable-in-polynomial-time-in-a-2d-Pareto-Front.pdf 
3. https://deepai.org/publication/polynomial-algorithms-for-p-dispersion-problems-in-a-2d-pareto-front 
4. https://arxiv.org/pdf/2002.11830v1.pdf

-------------------------------------------------------

Added : Algo3.png !

Got heavily inspired from my js file + my C++ files  ;

In order to achieve the program of the 3rd algorithm !

wouldn't much modify main.ccp & instance.cpp

**Guess like you have to work on the remaining two files**

-------------------------------------------------------

The code works on Windows & linux !

-------------------------------------------------------

How to execute the program on cmd :

`g++ DPkDispersion.cpp DPkDispersionMemKN.cpp instance.cpp main.cpp  -std=c++11 -static-libstdc++ -o exe  && "exe.exe"`

-------------------------------------------------------
how to execute the program on powershell :

`g++ DPkDispersion.cpp DPkDispersionMemKN.cpp instance.cpp main.cpp  -std=c++11  -static-libstdc++ -o exe ; ./"exe.exe"`
