//tp 2 notes : Comparaison [ from tp1 to tp2]
//g++ DPkDispersion.cpp DPkDispersionMemKN.cpp instance.cpp main.cpp -std=c++11 -o exe && & ./"exe.exe" 
//same Initialisation  

/*
i from 0 to N-1 
****************************
 going through every line 
****************************
{   
    k from 3 to p-1 : 
    **************
    k.start ==3 <=> p>3 
    And 
    k.end ==p-1 <=> p<=N
    ***************
    {//for k begins
    C[i,k]=0;
    }//end for k 
    
}//end for i

ShowMatrix(C,N);
*/
//inside :  fillLign(int k)
   for (int i=0;i<N;i++)
    {
        matrixDP [i][k]=0;
	}

//step 1 : same as tp 1 : 
//**** step 1 Begins ****
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
//**** step 1 Ends ****

//step2 : same as tp 1 : 
//**** step 2 Begins ****
// Deuxieme Etape C[i,2]=d(E[i],E[0])
    //createMatrixDP();
    
	cout <<"\n Affichage de la Matrice avant l'etape 2 : ";
    cout << "\n avec [ i <1;N-1> ] C[i,2] = d(E[i],E[0]); "<<endl;
    for (int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
        //Affichage de la Matrice
        cout << matrixDP [i][j] << " ; ";    
        }
    cout<< endl;
    }   //*/ 
    
    for (int i=1;i<N;i++) 
    {
        matrixDP[i][2]=dist(i,0);  
        cout <<" matrixDP[ " << i<< " ][ 2 ] = "<< matrixDP[i][2];
		cout<<endl;
	}

	cout <<"\n Affichage de la Matrice a l'etape 2 : ";
    cout << "\n avec [ i <1;N-1> ] C[i,2] = d(E[i],E[0]); "<<endl;
    for (int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
        //Affichage de la Matrice
        cout << matrixDP [i][j] << " ; ";    
        }
    cout<< endl;
    }	//printMatrix1;

//**** end of Step 2 ****

//******** Step 3 Begins ********
//fixing tp1 prints ! 
//Tp1  Solved
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
    
for (int i=0;i<N;i++)
{
    for(int j=0;j<N;j++)
    {
    //Affichage de la Matrice
    cout << matrixDP [i][j] << " ; ";    
    }//end for j
cout<< endl;
}//end for i 

//**Fin de l'etape3**
//******** Step 3 Ends ********
//---------------------------------------
//__________________________________
//******** Step 4 Begins ********
	//**Début de l'étape 4**

/* 	
in tp 1 : 
point Min2[N];

*/  point T2[N];//tp2  
	int j,n=-1;

	point pt;

	
    //loop works just fine ! 
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
        cout << "d(" << j<< ","<<N-1<<") = "<< val2<<" ; "<<endl;
        
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

    //I works just fine !
    I={0,j};
    bool condition=!(find(I.begin(), I.end(), N-1) != I.end());
    
        if(condition)
        {//if N-1 doesn't exist in I , add it in I 
			I.push_back(N-1);
	
        }









	//**Fin de l'étape 4**
//******** Step 4  Ends ********
//------------------------------------
//__________________________
//**** Step 5  Begins ****

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









//**** Step 5  Ends ****
//____________**Current Checkpoint**__________________

//-----------------------------------
//_____ Other Functions _____ 
//in tp 1 : 
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

//in both tps : 
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

/*      value > Max <=> value >-1 || value > previous_Maximum
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

