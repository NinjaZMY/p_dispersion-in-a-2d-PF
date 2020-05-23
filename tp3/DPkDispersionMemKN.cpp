#include "DPkDispersionMemKN.hpp"
#include <cmath>
#include <stdlib.h>  
#include <time.h>
#include <bits/stdc++.h>

using namespace std;

/// Variables  

std::vector<int> I; ; // Tableau des index

struct point
	{
		int index ;
		float value;
	} ;









///  Fonctions 

point maxAndIndex(point T[],int length);

float Minimum(float x,float y);

float max(float Array[],int length);

void ShowMatrix(float** M,int N);

void showI(std::vector<int> T);


void DPkDispersionMemKN::createMatrixDP(){
	//allocation dynamique de la matrice ; 
	//	float d =0  ;
    matrixDP = new float*[N];
    for (int i = 0; i < N; ++i)
    
    matrixDP[i] = new float[N];

}

void DPkDispersionMemKN::deleteMatrixDP(){
	for(int i = 0; i < N; i++) 
	delete [] matrixDP[i];
	delete [] matrixDP;
	
	cout << " Matrice Effacee "<<endl;
}

pair<float, int> DPkDispersionMemKN::computeCase(int k, int i) 
{
	int id = -1;
	float value = 0;

															
	cout << "-----------------------------------------------------\n";
	cout << "               a partir l'algorithme 2               \n";
	cout<<"          on ajoute un pointeur de fonction \n";
	cout<<"          ce pointeur pointe sur ComputeCase ;\n" ;  
	cout << "               Et c'est ainsi que ...\n";
	cout << "______________ L'algorithme 3 se lance ______________\n";
    cout << "\nK = "<<k; 
    cout<< " ; ComputingIndex = "<<i<<" ; N = "<<N;
	
	//le cout qui suit est utilisé  pour tester ce programme ! 
	//cout<<"\n M[0][2] = "<<matrixDP[0][2]<<" ; supposé égal à zéro ! ";
	cout<<endl;

	int a=k-1;
	int b=i-1;

	//cout <<"\n-----------------------";
	cout <<"\nb - a = "<<b<<" - "<<a<<" = "<<b-a<<endl;




	bool WouldLoop=(b-a)>=2;
	
	if( WouldLoop)
	//avant la boucle while !
	cout << "\n:: Dans la boucle while   ::\n\n";
	//end if 

 		while(WouldLoop) 
		{
		int j=(a+b)/2;
		cout <<"a = "<<a<<" ; b = "<<b<<" ;\n"; 
		cout <<"b - a = "<<b-a<<" >= 2 ;\n j = ( a + b ) / 2 = ( "<<a<<" + ";
		cout << b<<" ) / 2 = ( "<< a+b <<" ) / 2 = "<<j<<" ;\n\n"; 





 			if(matrixDP[k-1][j]-dist(j,i)>0)
			{
				if(b==j)
				break ; 
				//end if 

			//pour éviter une boucle infinie ! 	

			b=j; 
			cout << "b devient : "<<j<<endl; 
			}
			else 
			{
				if(a==j)
				break ; 
				//end if 

			//pour éviter une boucle infinie ! 	

			a=j; 
			cout << "a devient : "<<j<<endl; 
			}//end of if  



		}//end of while  
	
	if( WouldLoop)
	{
	cout <<"b - a = "<<b<<" - "<<a<<" = "<<b-a<<" < 2 "<<endl;
	cout << "\n:: Fin de la boucle while ::\n\n";	
	}//end if 

	float Min1=Minimum(matrixDP[k-1][a],dist(a,i)) ;   
	float Min2=Minimum(matrixDP[k-1][b],dist(b,i)) ;   

	bool condition=Min1<Min2;

		if(condition)
		{
		value=Min2; 
		id=b;
		}
		else
		{
		value=Min1; 
		id=a; 	
		}//end of if 
	
	cout << "\n Max = "<<value<<" ; argmax = "<<id<<"\n\n" ;


	
	//this is only for testing ! 
	cout << "K = "<<k; 
    cout<< " ; ComputingIndex = "<<i<<" ; N = "<<N<<"\n\n";
	
	cout << "______________ Fin de l'algorithme 3 ! ______________\n\n";


	return make_pair(value,id);

}//end of compute 

void DPkDispersionMemKN::fillLign(int k) {
// Premiere Etape
    for (int i=0;i<N;i++)
    {
        matrixDP [i][k]=0;
	}
	
}

void ShowMatrix(float** M,int N)
{
  for (int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
        //Affichage de la Matrice
        cout << M [i][j] << " ; ";    
        }//end of for j ! 
    cout<< endl; 
	;
    }   //end of for i !  
}//end of function ShowMatrix !  


void DPkDispersionMemKN::fillresult() {

// Deuxieme Etape C[i,2]=d(E[i],E[0])
//createMatrixDP();
    
	cout <<"\n Affichage de la Matrice avant l'etape 2 : ";
    cout << "\n avec [ i <1;N-1> ] C[i,2] = d(E[i],E[0]); "<<endl;

	ShowMatrix(matrixDP,N);


    
    for (int i=1;i<N;i++) 
    {
        matrixDP[i][2]=dist(i,0);  
        cout <<" matrixDP[ " << i<< " ][ 2 ] = "<< matrixDP[i][2];
		cout<<endl;
	}

	cout <<"\n Affichage de la Matrice a l'etape 2 : ";
    cout << "\n avec [ i <1;N-1> ] C[i,2] = d(E[i],E[0]); "<<endl;
	ShowMatrix(matrixDP,N);//printMatrix1;


// Troisieme Etape
    for (int i=1;i<N;i++)
    {
        for(int k=3;k<K;k++)
        {
			
					/*
				in tp1 : 
				float Min[N];


				*/
			float T[N];//tp2
			int index1=k-1;
			int index2=i-1;
			int startIndex=index1;
			int endIndex=index2;
			int j, n=-1;
			
			if(index1>endIndex)
			{
				startIndex=index2;
				endIndex=index1;
			}//end if

			if(startIndex<0)
			{
				startIndex=0;
			}//end if

			if(endIndex<0)
			{
				endIndex=0;
			}

			j=startIndex;
			
			for(j;j<=endIndex;j++)
			{
				float EuclidianDistance=dist(j,i);
				float value=matrixDP [j][k-1];
				n++;    
				/*
				in tp1:    
				Min[n]=Minimum(value,EuclidianDistance);
				*/
				T[n]=value+EuclidianDistance;//tp2
				j++;
			}//end for j
			
			n++;
//in tp 1 : C[i,k]=max [j <k-1 to i-1> ] min(C[j,k-1],d(E[j],E[i]) )
//in tp 2 : C[i,k]=max [j <k-1 to i-1> ] (C[j,k-1]+d(E[j],E[i]) )
//-----------------------------


			/* 
			in tp1:
			matrixDP[i][k]=max(Min,n); 
			*/
        	matrixDP[i][k]=max(T,n);//tp2;
		}//end for k
	}// end for i
	
	//printMatrix1;
	cout <<"\n Affichage de la Matrice a l'etape 3 : ";
	cout << "\n avec [ i <1;" << N-1<< "> ,  k <3;" << K-1<< ">  ] "<<endl;
	/* 
	in tp1:
	cout << " C[i,k] = max [j <k-1 to i-1> ] min(C[j,k-1],d(E[j],E[i]) )"<<endl;
 	*/
	cout << " C[i,k] = max [j <k-1 to i-1> ] (C[j,k-1]+d(E[j],E[i]) )"<<endl;//tp2
		
	ShowMatrix(matrixDP,N);//printMatrix1;


	//**Fin de l'etape3**
	
	//**Début de l'étape 4**
	/* 	
	in tp 1 : 
	point Min2[N];
	*/  
	point T2[N];//tp2  
	int j,n=-1;
	point pt;
	
	for(int j=K-1;j<N;j++)
    {
		float val1 = matrixDP [j][K-1];
		float val2 = dist(j,N-1);

		n++;
		pt.index=j;
		/* 
        in tp1:
        //Minimum works fine 
        pt.value=Minimum(val1,val2);
        */    
	   pt.value=val1+val2;//tp2

	   /*
	   in tp1: 
	   Min2[n]=pt;
	   */
	   T2[n]=pt;//tp2
		cout << "C[" << j<< "]["<<K-1 <<"] = "<< val1<<" ; ";
		cout << "d(" << j<< ","<<N-1 <<") = "<< val2<<" ; ";
		
		/*    
        in tp1:     
        cout << "Min[" << n<< "].index = "<< Min2[n].index << endl;
         */
        //tp2:
        cout << "T2["  <<N <<"].value = "<< T2[n].value<<" ; ";
		
        cout << "T2[" << n<< "].index = "<< T2[n].index << endl;
    }//end for j
	
	n++; // Min2 / T2 Length 
    /* 	
    in tp1 : 
    pt=maxAndIndex(Min2,n);
    */
   pt=maxAndIndex(T2,n);//Tp2;

	OPT=pt.value;
	j=pt.index;
	cout<<"OPT = "<<OPT <<"\n j = "<<j<<endl;
	I={0,j};
    bool condition=!(find(I.begin(), I.end(), N-1) != I.end());
    
        if(condition)
        {//if N-1 doesn't exist in I , add it in I 
			I.push_back(N-1);
	
        }//end of condition
	//**Fin de l'étape 4**

}//end of function ! 

void DPkDispersionMemKN::fillFirstLine(){

// Les valeurs de la premiere ligne sont indéfinies = -1	

	cout<<"\n Affichage de la Matrice a l'etat brute : ";
    cout << "\n les valeurs indefinis sont affecte aleatoirement "<<endl;
	ShowMatrix(matrixDP,N);//printMatrix1;
    
    
    cout<<"\n Affichage de la Matrice\n Etape 1  : ";
    cout << "les valeurs indefinis sont transforme en -1 "<<endl;
    for (int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
        matrixDP [i][j]=-1;
        cout << matrixDP [i][j] << " ; ";    
        }
    cout<< endl;
    }
}

void DPkDispersionMemKN::backtrack(){
	/*Début de l'étape 5*/
	int i = I[1];
    showI(I);
    /*
    in tp1  : 
	point Min[N];
    */
	point T[N];//tp2
	point pt;
	
	for	(int k=K-1;k>2;k--)
	{
		int n=-1; 
		int startIndex=k-1;
		int endIndex=i-1;
			if(startIndex>endIndex)
			{
				endIndex=k-1;
				startIndex=i-1;
			}//end if    

			if(startIndex<0)
			{
				startIndex=0;
			}

			if(endIndex<0)
			{
				endIndex=0;
			}
			
			int j=startIndex;
			

        for(j;j<=endIndex;j++)
        {
		   float val1=matrixDP[j][K-1];
		   float val2=dist(j,i);
		   n++; 
		   pt.index=j;
        /*  
        in tp1: 
        pt.value=Minimum(val1,val2);
         */               
           pt.value=(val1+val2);//tp2
           
           /*
            in tp1 : 
            Min[n]=pt;
            */
		   T[n]=pt;//tp2

		    cout << "  C[" << j<< "]["<< K-1 << "] = " << val1;
		   cout << " ;  d(" << j<< ","<< i << ") = " << val2 <<endl;
            /*
            in tp1:
 		   cout <<" ; Min[" << n<< "].index = "<<Min[n].index<<endl;
           cout <<" ; Min = "<<Min[n].value<<endl; 
           */
           cout <<" ; T[" << n<< "].index = "<<T[n].index;
		   cout <<" ; T[" << n<< "].value = "<<T[n].value<<endl;
        }//end for j
        
    n++;//so that the n matches the length
    /*         
    in tp1 : 
    pt=maxAndIndex(Min,n);

    */
     pt=maxAndIndex(T,n);//tp2   

        //returns an object containing max & arg max

		j=pt.index;     
		bool condition=!(find(I.begin(), I.end(), j) != I.end());
		cout<<"j = "<<j<<endl;
		
        if(condition)
        {
			I.push_back(j);
			showI(I);//I = [];
        }
    }//end of for k
cout << "End of Function"<<endl << "Finalement OPT == " << OPT ; 
cout <<endl<< "& Enfin "<<endl;
showI(I);
/*Fin de l'étape 5*/

}//end of function 


void DPkDispersionMemKN::solve(){

	clearOPT();

/*

K limits from [3,N-2]
int ComputingIndex=rand()%(N-1-K)+K+1;//[k+1,N-1]

*/
/// Faire le Set de K  avec une valeur Aleatoire 

//la valeur varie entre ]2,N-1] 
    srand (time(NULL));
	//N se trouve dans l'intervalle : [5,N_Limit]

	int k;
	int Exp=N-4;
		if(Exp!=0)
		k=rand()%(Exp); 
		else
		k=0;
		//end if 

	int K=k+3;//[3,N-2]

    setK(K);
    cout <<" K = " << K<< endl;
 
	if (K<=2) {
		OPT = dist(0,N-1);
		solution.push_back(0);
		solution.push_back(N-1);
		return;
	}
	
	createMatrixDP(); 
	fillFirstLine();
	for (int k=2 ; k < K; k++ )fillLign(k); 
	fillresult();
	backtrack(); 
	//the compute program starts from here ! 

	pair<float,int> (DPkDispersionMemKN::*functionPointer)(int,int);
	functionPointer=computeCase;

	int ComputingIndex=rand()%(N-1-K)+K+1;//[k+1,N-1]

	 
/*	
	this is the alternative solution to this ! 
	DPkDispersionMemKN functionCallerObject; 

 	functionCallerObject.N=N; 
	functionCallerObject.matrixDP=matrixDP; */
	//instead of this : &functionCallerObject

	(this->*functionPointer)(K,ComputingIndex);


	//the compute program ends here !
	deleteMatrixDP();
}



float Minimum(float x,float y)
{
    float min=x; 
        if(x==y==-1)
        	return -1;
        else if(x==-1 || y==-1) 
        //this means that one of them is undefined 
		{
			float T[2]={x,y};
			min= max(T,2)  ;  
			return min;
		}
        
        
		 if(min>y)
			min=y;    
		
	    return min;
}//end of function	
	


float max(float T[],int length)
{
	int  n=length;
	float Max=T[0];
	bool condition=true;

    for(int i=0;i<length;i++)
    {
        while( T[i]== -1 )
        {
        i++; 
            if(i==length)
            {
            condition=false; 
            break;//get out of the loop               
            } //end if   
        }//end of while
        if(!condition)
        {
			break;//or use the if many times
        }//end of if
    
    float value=T[i];
  
        if( Max== -1 )
        {
			Max=value;
			//condition=false;
        }//end if 
   
        if(value>Max)
        {
			Max=value;    
        }//end of if
    }//end for i
	return Max;
}//end of function

point maxAndIndex(point T[],int length)
{
	point pt;
	int index= T[0].index;
	float Max=T[0].value;

for(int i=1;i<length;i++)
//i=1; because we already parsed T[0]
{
		pt=T[i];
		float value=T[i].value;

		/*      
		value > Max <=> value >-1 || value > previous_Maximum
 		if( Max== -1 )
		{
			Max=value;
			index=pt.index;
        }//end if  
        */

		if(value>Max)
		{
			Max=value;
			index=pt.index;
		}//end of if
}//end for i
	pt.value=Max;
	pt.index=index;
	return pt;

}//end of function

void showI(std::vector<int> T)
{
 
	int length=T.size();
	cout<<"	 Voici la liste des Index : [ ";
    for(int i=0;i<length;i++)
    {
		cout<<T[i];
		if(i!=length-1)
		{
			cout<<" , ";
		}//end of if
		
    }//end of for
	cout<<" ]"<<endl;


}//end of function
