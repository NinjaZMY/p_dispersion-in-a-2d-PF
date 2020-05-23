# TP_Matrix3

Le code & l'éxecutable du programme ,
fonctionnent sur Windows & Linux !


-------------------------------------------------------

Avant de Compiler Le code fourni :

*Il faudra parcourir l'emplacement du projet !

> cd "projectDirectory"

exemple : 
> cd "d:\Users\Z M Y\work\p-dispersion in a 2d-pf\tp3" 


-------------------------------------------------------

:Concernant le fichier `pseudoCodeC++.cpp`:

C'est un fichier qui m'a aidé dans la phase du testing !

la version finale du fichier ,
ne contient pas totalité du code inialement écrit


::Comment Compiler ce fichier ?:: 

( sur cmd/terminal ) 

> g++ pseudoCodeC++.cpp -std=c++11 -static-libstdc++ -o pseudoCodeC++ && "pseudoCodeC++.exe"

--

( sur powerShell ) :

> g++ pseudoCodeC++.cpp -std=c++11 -static-libstdc++ -o pseudoCodeC++ ; ./"pseudoCodeC++.exe" 

-------------------------------------------------------

:Concernant le fichier `Tp3_Log.bat`:

Le fichier "Tp3_Log.bat" est le fichier de logs , 
qui montre la trace du programme , 

En outre , ce fichier montre : 
( 2 scénarios d'éxecutions du programme )

-------------------------------------------------------

::Comment Compiler Le Code de l'algorithme 3 ? ::  

( sur cmd/terminal ) 

> g++ DPkDispersion.cpp DPkDispersionMemKN.cpp instance.cpp main.cpp  -std=c++11 -static-libstdc++ -o exe  && "exe.exe"

--

( sur powerShell ) :

> g++ DPkDispersion.cpp DPkDispersionMemKN.cpp instance.cpp main.cpp  -std=c++11  -static-libstdc++ -o exe ; ./"exe.exe"

