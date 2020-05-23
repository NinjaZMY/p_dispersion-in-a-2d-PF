:Scénario1 le programme entre dans la boucle while: 

::ComputeCase 1::

PS D:\Users\Z M Y\work\p-dispersion in a 2d-pf\tp3> ./"exe.exe"
Importing dataset...
Exception invalid argument. Continue.
Contructeur fini
Liste des points de l'instance:
(18 , 7) (1 , 1) (8 , 9) (1 , 4) (5 , 6) (4 , 9) (7 , 8) (3 , 6)

N = 8
 K = 3

 Affichage de la Matrice a l'etat brute :
 les valeurs indefinis sont affecte aleatoirement
9.06483e-039 ; 9.0084e-039 ; 0 ; 0 ; 0 ; 0 ; 0 ; 0 ;
9.06483e-039 ; 9.0084e-039 ; 5.35485e+032 ; 0 ; 0 ; 0 ; 9.00845e-039 ; 0 ;
9.06483e-039 ; 9.0084e-039 ; 0 ; 0 ; 5.35485e+032 ; 0 ; 0 ; 0 ;
9.06483e-039 ; 9.0084e-039 ; 0 ; 1.4013e-045 ; 0 ; 0 ; 0 ; 5.35379e+032 ;
9.06483e-039 ; 9.0084e-039 ; 5.09905e+032 ; 5.35417e+032 ; 1.03398e-025 ; 5.30251e-041 ; 9.06483e-039 ; 9.0084e-039 ;
9.06483e-039 ; 9.0084e-039 ; 0 ; 0 ; 0 ; 0 ; 0 ; 0 ;
9.06483e-039 ; 9.0084e-039 ; 0 ; 0 ; 0 ; 0 ; 0 ; 0 ;
9.08676e-039 ; 9.0084e-039 ; 0 ; 0 ; 0 ; 0 ; 0 ; 0 ;

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
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
 matrixDP[ 1 ][ 2 ] = 18.0278
 matrixDP[ 2 ][ 2 ] = 10.198
 matrixDP[ 3 ][ 2 ] = 17.2627
 matrixDP[ 4 ][ 2 ] = 13.0384
 matrixDP[ 5 ][ 2 ] = 14.1421
 matrixDP[ 6 ][ 2 ] = 11.0454
 matrixDP[ 7 ][ 2 ] = 15.0333

 Affichage de la Matrice a l'etape 2 :
 avec [ i <1;N-1> ] C[i,2] = d(E[i],E[0]);
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 18.0278 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 10.198 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 17.2627 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 13.0384 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 14.1421 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 11.0454 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 15.0333 ; -1 ; -1 ; -1 ; -1 ; -1 ;

 Affichage de la Matrice a l'etape 3 :
 avec [ i <1;7> ,  k <3;2>  ]
 C[i,k] = max [j <k-1 to i-1> ] (C[j,k-1]+d(E[j],E[i]) )
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 18.0278 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 10.198 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 17.2627 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 13.0384 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 14.1421 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 11.0454 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 15.0333 ; -1 ; -1 ; -1 ; -1 ; -1 ;
C[2][2] = 10.198 ; d(2,7) = 5.83095 ; T2[8].value = 16.029 ; T2[0].index = 2
C[3][2] = 17.2627 ; d(3,7) = 2.82843 ; T2[8].value = 20.0911 ; T2[1].index = 3
C[4][2] = 13.0384 ; d(4,7) = 2 ; T2[8].value = 15.0384 ; T2[2].index = 4
C[5][2] = 14.1421 ; d(5,7) = 3.16228 ; T2[8].value = 17.3044 ; T2[3].index = 5
C[6][2] = 11.0454 ; d(6,7) = 4.47214 ; T2[8].value = 15.5175 ; T2[4].index = 6
C[7][2] = 15.0333 ; d(7,7) = 0 ; T2[8].value = 15.0333 ; T2[5].index = 7
OPT = 20.0911
 j = 3
         Voici la liste des Index : [ 0 , 3 , 7 ]
End of Function
Finalement OPT == 20.0911
& Enfin
         Voici la liste des Index : [ 0 , 3 , 7 ]
-----------------------------------------------------
               a partir l'algorithme 2
          on ajoute un pointeur de fonction
          ce pointeur pointe sur ComputeCase ;
               Et c'est ainsi que ...
______________ L'algorithme 3 se lance ______________

K = 3 ; ComputingIndex = 7 ; N = 8

b - a = 6 - 2 = 4

:: Dans la boucle while   ::

a = 2 ; b = 6 ;
b - a = 4 >= 2 ;
 j = ( a + b ) / 2 = ( 2 + 6 ) / 2 = ( 8 ) / 2 = 4 ;

a devient : 4
a = 4 ; b = 6 ;
b - a = 2 >= 2 ;
 j = ( a + b ) / 2 = ( 4 + 6 ) / 2 = ( 10 ) / 2 = 5 ;

a devient : 5
a = 5 ; b = 6 ;
b - a = 1 >= 2 ;
 j = ( a + b ) / 2 = ( 5 + 6 ) / 2 = ( 11 ) / 2 = 5 ;

b - a = 6 - 5 = 1 < 2

:: Fin de la boucle while ::


 Max = 4.47214 ; argmax = 6

K = 3 ; ComputingIndex = 7 ; N = 8

______________ Fin de l'algorithme 3 ! ______________

 Matrice Effacee
REsolution terminee en  200 ms
PS D:\Users\Z M Y\work\p-dispersion in a 2d-pf\tp3> '

.......................................................

:Scénario2 le programme n'entre pas dans la boucle while : 

::ComputeCase 2::

PS D:\Users\Z M Y\work\p-dispersion in a 2d-pf\tp3> ./"exe.exe"
Importing dataset...
Exception invalid argument. Continue.
Contructeur fini
Liste des points de l'instance:
(18 , 7) (1 , 1) (8 , 9) (1 , 4) (5 , 6) (4 , 9) (7 , 8) (3 , 6)

N = 8
 K = 3

 Affichage de la Matrice a l'etat brute :
 les valeurs indefinis sont affecte aleatoirement
1.20036e-038 ; 1.19471e-038 ; 0 ; 0 ; 0 ; 0 ; 0 ; 0 ;
1.20036e-038 ; 1.19471e-038 ; 5.35485e+032 ; 0 ; 0 ; 0 ; 1.19472e-038 ; 0 ;
1.20036e-038 ; 1.19471e-038 ; 0 ; 0 ; 5.35485e+032 ; 0 ; 0 ; 0 ;
1.20036e-038 ; 1.19471e-038 ; 0 ; 1.4013e-045 ; 0 ; 0 ; 0 ; 5.35379e+032 ;
1.20036e-038 ; 1.19471e-038 ; 5.09905e+032 ; 5.35417e+032 ; 1.03398e-025 ; 4.46398e-041 ; 1.20036e-038 ; 1.19471e-038 ;
1.20036e-038 ; 1.19471e-038 ; 0 ; 0 ; 0 ; 0 ; 0 ; 0 ;
1.20036e-038 ; 1.19471e-038 ; 0 ; 0 ; 0 ; 0 ; 0 ; 0 ;
1.20255e-038 ; 1.19471e-038 ; 0 ; 0 ; 0 ; 0 ; 0 ; 0 ;

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
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
 matrixDP[ 1 ][ 2 ] = 18.0278
 matrixDP[ 2 ][ 2 ] = 10.198
 matrixDP[ 3 ][ 2 ] = 17.2627
 matrixDP[ 4 ][ 2 ] = 13.0384
 matrixDP[ 5 ][ 2 ] = 14.1421
 matrixDP[ 6 ][ 2 ] = 11.0454
 matrixDP[ 7 ][ 2 ] = 15.0333

 Affichage de la Matrice a l'etape 2 :
 avec [ i <1;N-1> ] C[i,2] = d(E[i],E[0]);
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 18.0278 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 10.198 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 17.2627 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 13.0384 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 14.1421 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 11.0454 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 15.0333 ; -1 ; -1 ; -1 ; -1 ; -1 ;

 Affichage de la Matrice a l'etape 3 :
 avec [ i <1;7> ,  k <3;2>  ]
 C[i,k] = max [j <k-1 to i-1> ] (C[j,k-1]+d(E[j],E[i]) )
-1 ; -1 ; 0 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 18.0278 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 10.198 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 17.2627 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 13.0384 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 14.1421 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 11.0454 ; -1 ; -1 ; -1 ; -1 ; -1 ;
-1 ; -1 ; 15.0333 ; -1 ; -1 ; -1 ; -1 ; -1 ;
C[2][2] = 10.198 ; d(2,7) = 5.83095 ; T2[8].value = 16.029 ; T2[0].index = 2
C[3][2] = 17.2627 ; d(3,7) = 2.82843 ; T2[8].value = 20.0911 ; T2[1].index = 3
C[4][2] = 13.0384 ; d(4,7) = 2 ; T2[8].value = 15.0384 ; T2[2].index = 4
C[5][2] = 14.1421 ; d(5,7) = 3.16228 ; T2[8].value = 17.3044 ; T2[3].index = 5
C[6][2] = 11.0454 ; d(6,7) = 4.47214 ; T2[8].value = 15.5175 ; T2[4].index = 6
C[7][2] = 15.0333 ; d(7,7) = 0 ; T2[8].value = 15.0333 ; T2[5].index = 7
OPT = 20.0911
 j = 3
         Voici la liste des Index : [ 0 , 3 , 7 ]
End of Function
Finalement OPT == 20.0911
& Enfin
         Voici la liste des Index : [ 0 , 3 , 7 ]
-----------------------------------------------------
               a partir l'algorithme 2
          on ajoute un pointeur de fonction
          ce pointeur pointe sur ComputeCase ;
               Et c'est ainsi que ...
______________ L'algorithme 3 se lance ______________

K = 3 ; ComputingIndex = 4 ; N = 8

b - a = 3 - 2 = 1

 Max = 4.47214 ; argmax = 3

K = 3 ; ComputingIndex = 4 ; N = 8

______________ Fin de l'algorithme 3 ! ______________

 Matrice Effacee
REsolution terminee en  222 ms
PS D:\Users\Z M Y\work\p-dispersion in a 2d-pf\tp3>