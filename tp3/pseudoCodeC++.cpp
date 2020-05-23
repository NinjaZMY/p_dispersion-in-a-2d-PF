//pseudoCodeC++.cpp 
#include <cmath>
#include <stdlib.h>  
#include <time.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

//declaring my functions ! 
void printHello(); 
pair<float, int> computeCase(int k, int i) ;


int main() 
{
/*

this is occuring beside the setK(x) ; 
so in here we gonna also : 
set the ComputingIndex ; 

as K goes from[4,N]

ComputingIndex should be from[K+1,N] ; 


cd "d:\Users\Z M Y\work\p-dispersion in a 2d-pf\tp3"

g++ pseudoCodeC++.cpp -std=c++11 -static-libstdc++ -o pseudoCodeC++ ; ./"pseudoCodeC++.exe"

 & ./"pseudoCodeC++.exe"

*/
srand (time(NULL));
int N_Limit=6;
int N=rand()%(N_Limit-4)+5; //N limits : [5,N_Limit]

int k;
int Exp=N-4;
    if(Exp!=0)
    k=rand()%(Exp); 
    else
    k=0;
    //end if 

int K=k+3;

//int K = rand()%(N-4)+3; //[3,N-2]
int ComputingIndex=rand()%(N-1-K)+K+1;//[k+1,N-1]
/*
objective fix ComputingIndex ! 
N=4;


y=N-4=0 ; 

K=y+3=3; // correct ! 



-

N=5; 

y=N-4=1
=> y= Value([0,1])

if y==1
K=1+3=4 // correct ! 
x=N-k-1=0; 
i=5;
else 
//y==0
k=0+3=3; // correct ! 
x=N-k-1=5-3-1=5-4=1; 
x=> rand()%1=Value([0,1])
i=Value[0,1]+k+1=Value[0,1]+4;
=> i==4 || i==5 
=> i = Value[4,5]

k goes from [3,N-1] & that's how it should be ! 



*/

cout << " N = "<<N<<endl;
/*
------------------------------------
"i" goes from `[k+1,N]` ; 

I'm gonna verify that "The p" equals "The K"

yes it's true :  

"K" représente le "k" de notre Code == "p" 

---

aprés que l'algorithme 2 soit éxecuté , 
et que le programme a récupéré ...
... les indexes et la valeur optimale ; 

à ce moment là ; il faudra tester : 
l'algorithme de compute ! 
--- 

Je devrais donc définir ...
le fameux "i" , par une valeur aléatoire 
tout en assurant le fait que `i > k` , 
j'ai déjà mentionné que : 
"i" se trouve entre `[k+1,N]` ; 

----




*/

/* void (*functionPointer)();
functionPointer=printHello; 

functionPointer(); */
pair<float,int> (*functionPointer)(int,int);

functionPointer=computeCase; 

functionPointer(K,ComputingIndex);




printHello();
}//end of main 

//here comes the functions ! 
void printHello()
{ 
cout <<"The End\n"; ;   
}//end of printHello

pair<float, int> computeCase(int k, int i) 
{
	int id = -1;
	float value = 0;

    cout << "Welcome inside the Compute Function\n";

    cout << "K = "<<k; 
    cout<< " ; ComputingIndex = "<<i;

    cout<<endl;

	return make_pair(value,id);

}//end of Compute