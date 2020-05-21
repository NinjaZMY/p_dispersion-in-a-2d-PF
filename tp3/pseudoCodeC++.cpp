//pseudoCodeC++.cpp 
#include <cmath>
#include <stdlib.h>  
#include <time.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;



int main() 
{
/*

this is occuring beside the setK(x) ; 
so in here we gonna also : 
set the ComputingIndex ; 

as K goes from[4,N]

ComputingIndex should be from[K+1,N+1] ; 


cd "d:\Users\Z M Y\work\p-dispersion in a 2d-pf\tp3"

g++ pseudoCodeC++.cpp -std=c++11 -static-libstdc++ -o pseudoCodeC++ ; ./"pseudoCodeC++.exe"

 & ./"pseudoCodeC++.exe"

*/
srand (time(NULL));
int N_Limit=10;
int N=rand()%(N_Limit-3)+4; //[4,N_Limit]
int K = rand()%(N-3)+4; 
int _ComputingIndex=rand()%(1)+1 ; 

cout << " N = "<<N<<" ; K = "<<K; 


cout<<endl;

/*
------------------------------------
"i" goes from `[k+1,N+1]` ; 

I'm gonna verify that "The p" equals "The K"

yes it's true :  

"K" représente le "k" de notre Code == "p" 

---

aprés que l'algorithme 2 soit éxecuté , 
et que le programme a récupéré ...
... les indexes et la valuer optimale ; 

à ce moment là ; il faudra tester : 
l'algorithme de compute ! 
--- 

Je devrais donc définir ...
le fameux "i" , par une valeur aléatoire 
tout en assurant le fait que `i > k` , 
j'ai déjà mentionné que : 
"i" se trouve entre `[k+1,N+1]` ; 

----




*/












}