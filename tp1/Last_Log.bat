Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

Try the new cross-platform PowerShell https://aka.ms/pscore6

PS C:\Users\Riados\Documents\p-dispersion in a 2d-PF with p GT 3 - project\tp1> g++ DPkDispersion.cpp DPkDispersionMemKN.cpp instance.cpp main.cpp -std=c++11 -o exe
PS C:\Users\Riados\Documents\p-dispersion in a 2d-PF with p GT 3 - project\tp1> &./"exe.exe"
Importing dataset...
Exception invalid argument. Continue.
Contructeur fini
 K = 7

 Affichage de la Matrice a l'etat brute :
 les valeurs indefinis sont affecte aleatoirement
2.33698e-038 ; 2.33331e-038 ; 3.8207e-037 ; 3.8207e-037 ; 3.8207e-037 ; 1.05803e-037 ; 3.8207e-037 ; 3.8207e-037 ;
2.33698e-038 ; 2.33331e-038 ; 1.17556e-037 ; 1.17556e-037 ; 1.70453e-037 ; 1.23433e-037 ; 1.23433e-037 ; 1.17556e-037 ; 
2.33698e-038 ; 2.33331e-038 ; 1.17556e-037 ; 1.17556e-037 ; 1.17556e-037 ; 1.17556e-037 ; 1.05801e-037 ; 1.058e-037 ;
2.33698e-038 ; 2.33331e-038 ; 1.058e-037 ; 1.058e-037 ; 1.93971e-037 ; 1.93971e-037 ; 1.93971e-037 ; 1.93971e-037 ; 
2.33698e-038 ; 2.33331e-038 ; 7.58241e-037 ; 7.58274e-037 ; 7.58274e-037 ; 3.79137e-037 ; 3.79131e-037 ; 3.79131e-037 ; 
2.33698e-038 ; 2.33331e-038 ; 3.79131e-037 ; 3.79131e-037 ; 3.79131e-037 ; 1.05803e-037 ; 1.058e-037 ; 1.058e-037 ;
2.33698e-038 ; 2.33331e-038 ; 3.8207e-037 ; 3.8207e-037 ; 3.8207e-037 ; 3.8207e-037 ; 3.8207e-037 ; 3.8207e-037 ;
2.33279e-038 ; 2.33331e-038 ; 1.058e-037 ; 1.17555e-037 ; 1.17555e-037 ; 3.82059e-037 ; 1.058e-037 ; 1.058e-037 ; 

 Affichage de la Matrice
 Etape 1  : les valeurs indefinis sont transforme en -1
-1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; 
-1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; 
-1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; 
-1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ; -1 ;

 Affichage de la Matrice avant l'etape 2 :
 avec [ i <1;N-1> ] C[i,2] = d(E[i],E[0]);
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ; 
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ; 
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ; 
 matrixDP[ 1 ][ 2 ] = 18.0278
 matrixDP[ 2 ][ 2 ] = 10.198
 matrixDP[ 3 ][ 2 ] = 17.2627
 matrixDP[ 4 ][ 2 ] = 13.0384
 matrixDP[ 5 ][ 2 ] = 14.1421
 matrixDP[ 6 ][ 2 ] = 11.0454
 matrixDP[ 7 ][ 2 ] = 15.0333

 Affichage de la Matrice a l'etape 2 :
 avec [ i <1;N-1> ] C[i,2] = d(E[i],E[0]);
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ; 
-1 ; -1 ; 18.0278 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 10.198 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 17.2627 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 13.0384 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 14.1421 ; 0 ; 0 ; 0 ; 0 ; -1 ; 
-1 ; -1 ; 11.0454 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 15.0333 ; 0 ; 0 ; 0 ; 0 ; -1 ; 

 Affichage de la Matrice a l'etape 3 :
 avec [ i <1;7> ,  k <3;6>  ]
 C[i,k] = max [j <k-1 to i-1> ] min(C[j,k-1],d(E[j],E[i]) )
-1 ; -1 ; 0 ; 0 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 18.0278 ; 10.198 ; 0 ; 0 ; 0 ; -1 ;
-1 ; -1 ; 10.198 ; 10.6301 ; 10.198 ; 0 ; 0 ; -1 ; 
-1 ; -1 ; 17.2627 ; 8.60233 ; 8.60233 ; 8.60233 ; 0 ; -1 ;
-1 ; -1 ; 13.0384 ; 4.24264 ; 4.47214 ; 4.47214 ; 4.47214 ; -1 ; 
-1 ; -1 ; 14.1421 ; 4 ; 5.83095 ; 3.16228 ; 3.16228 ; -1 ;
-1 ; -1 ; 11.0454 ; 2.82843 ; 7.2111 ; 2.82843 ; 3.16228 ; -1 ;
-1 ; -1 ; 15.0333 ; 5.83095 ; 3.16228 ; 4.47214 ; 3.16228 ; -1 ; 
C[6][6] = 3.16228 ; d(6,7) = 4.47214 ; Min[0].index = 6
C[7][6] = 3.16228 ; d(7,7) = 0 ; Min[1].index = 7
OPT = 3.16228
 j = 6
         Voici la liste des Index : [ 0 , 6 , 7 ]
  C[5][6] = 3.16228 ;  d(5,6) = 3.16228
 ; Min[0].index = 5 ; Min = 3.16228
j = 5
         Voici la liste des Index : [ 0 , 6 , 7 , 5 ]
  C[4][6] = 4.47214 ;  d(4,6) = 2.82843
 ; Min[0].index = 4 ; Min = 2.82843
  C[5][6] = 3.16228 ;  d(5,6) = 3.16228
 ; Min[1].index = 5 ; Min = 3.16228
j = 5
  C[3][6] = 0 ;  d(3,6) = 7.2111
 ; Min[0].index = 3 ; Min = 0
  C[4][6] = 4.47214 ;  d(4,6) = 2.82843
 ; Min[1].index = 4 ; Min = 2.82843
  C[5][6] = 3.16228 ;  d(5,6) = 3.16228
 ; Min[2].index = 5 ; Min = 3.16228
j = 5
  C[2][6] = 0 ;  d(2,6) = 1.41421
 ; Min[0].index = 2 ; Min = 0
  C[3][6] = 0 ;  d(3,6) = 7.2111
 ; Min[1].index = 3 ; Min = 0
  C[4][6] = 4.47214 ;  d(4,6) = 2.82843
 ; Min[2].index = 4 ; Min = 2.82843
  C[5][6] = 3.16228 ;  d(5,6) = 3.16228
 ; Min[3].index = 5 ; Min = 3.16228
j = 5
End of Function
Finalement OPT == 3.16228
& Enfin
         Voici la liste des Index : [ 0 , 6 , 7 , 5 ]
 Matrice Effacee
Liste des points de l'instance:
(18 , 7) (1 , 1) (8 , 9) (1 , 4) (5 , 6) (4 , 9) (7 , 8) (3 , 6)

N= 8 , K= 7 , OPT=3.16228

Selection des points:


REsolution terminee en  420 ms
PS C:\Users\Riados\Documents\p-dispersion in a 2d-PF with p GT 3 - project\tp1>