/******* step 1 begins *******/
var x,y;
M=Math; 
N=4+random(17);
//3<p<=N
p=4+random(N-4);
E=generatePoints(N);
//-------------------
C=[];//making C a first dimension Array
/*
*** Matrix Initialisation ****

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

Through the following loop we shall make C a 2d matrix 
*/
log="N = "+N+" & p = "+p;
console.log(log);
for(i=0;i<N;i++)
{
C[i]=[];//congrats you made your 2d matrix
    for(k=3;k<p;k++)
    {
    C[i][k]=0;
    log="C["+i+","+k+"] = 0";
    console.log(log);

    ;}//end for k
}//end for i;

ShowMatrix(C,N);
/* ****** step 1 ends ****** */
/*

******************************************************************
i from 0 to N-1 because we need to go through the whole ligns 
******************************************************************

for i <0 - N-1>
{
C[i,2]=d(E[i],E[0])
}//end for i
*/
/*
******
*/
//
/* ******** step 2 begins ******** */
msg="******** step 2 begins ********";
console.log(msg);
for(i=0;i<N;i++)
{
point1=E[i];
point2=E[0];
C[i][2]=d(point1,point2);
msg="C["+i+",2] = "+C[i][2];
console.log(msg); 
;}//end of for i
ShowMatrix(C,N);


/*
//basically this is optimization 

******************************************************************
so that we would assign the column (k==2) a value ,
 only once C[i,k] [i going from 0 to N-1] 

 instead of assigning the column(k==2) with 0 ; 
& then assign it with the Euclidian equation on the next loop ; 

 

besides , if this code is left unoptimized , 

the loop that comes after the initialisation  (having i from 1 to N-1);
the loop wouldn't allow it to assign C[2,0] with a value ; 

that"s why my code is better ! 
******************************************************************


*/
/********** end of step2 **********/

/***** step3 begins *****/
msg="**** step3 begins ****";
console.log(msg);

for(i=1;i<N;i++)
/*
*******************************
(because we gonna use i-1 & i)
*******************************
*/
{
    for(k=3;k<p;k++)
    /*
    ************************************************************
    because 
    1: k.start ==3 refering to p > 3 
    also k-1 , might refer to 2 , 
    & we already initialized the matrix when column (k==2) 
    as shown in the second loop
    2. k.end == p-1 refering to p<=N ,
    if p==N then k.end is also valid 
    ************************************************************
    */
    {
    n=-1;
    Min=[];
    //[k-1,i-1]
    
    index1=k-1;
    index2=i-1;

    startIndex=index1;
    endIndex=index2;
        if(index1>endIndex)
        {
        startIndex=index2;
        endIndex=index1;
        }//end if

        if(startIndex<0)
        {
            startIndex=0;
        }

        if(endIndex<0)
        {
        endIndex=0;
        }

        j=startIndex; 
        
        for(j;j<=endIndex;j++)
        
        {
        EuclidianDistance=d(E[j],E[i]);
        value=C[j][k-1];
        n++;    
        Min[n]=Minimum(value,EuclidianDistance);
        j++;
        }//end of for j

    n++;
    C[i][k]=max(Min,n);
    //C[i,k]=max [j <k-1 to i-1> ] min(C[j,k-1],d(E[j],E[i]) )
    value=C[i][k]; 
    console.log("C["+i+","+k+"] = "+value);
    }//end for k
}//end of for i
ShowMatrix(C,N)
/*
i from 1 to N-1 
{

    k from 3 to p-1 
    {
        
    n=-1;
    Min=[];//90
        loop j from k-1 to i-1
        {
        EuclidianDistance=d(E[j],E[i]);
        value=C[j,k-1];
        n++;    
        Min[n]=Minimum(value,EuclidianDistance);
        }//end for j 
    n++;//so that n would b the length 
    C[i,k]=max(Min,n);
    //C[i,k]=max [j <k-1 to i-1> ] min(C[j,k-1],d(E[j],E[i]) )//100
    
    }//end for k 
}//end for i


*/
//checking if step3 code is working !
/**** step3 ends ****/
//------------------------------
/******** step 4 begins ********///110
Min=[];
n=-1;
    for(j=p-1;j<N;j++)
    {
/* 
************************************************************************
//C[j,N-1] , beacause basically N in not indexed , 
//& N-1 , represents the last column !
basically we gonna get the max & the arg max on the same algorithm , 
Thus , implies that the algorithm provided is not made by a programmer 
& that it is totally flawed as it showns that it is full of flaws , 
mainly with the indexes ! 
************************************************************************
*///120
    val1=C[j][p-1];
    val2=C[j][N-1];
    n++;
    point=Min[n]={};
    point.index=j;
    point.value=Minimum(val1,val2);
    }//end for j
n++//so that n matches the length
//check step4
//Min is an Array of objects, each element contain an object
point=maxAndIndex(Min,n);
//returns an object containing max & arg max

OPT=point.value;
j=point.index;
log="OPT = "+OPT+"\n j = "+j;
console.log(log);
/*


Min=[];
n=-1;
for j <p-1,N-1>//120    
{   
val1=C[j,p-1];
val2=C[j,N-1];
n++;
point=Min[n]={};
point.index=j;
point.value=Minimum(val1,val2);
    -------------------------------
    in this loop 
    you will be able to get //130
    max & argmax
    after the loop ends !
    -------------------------------
}//end for
n++//so that n matches the length
point=maxAndIndex(Min,n);
//returns an object containing max & arg max
OPT=point.value;
j=point.index;
-----------------------------------//140
//OPT=max [ j <p-1,N-1> ]min(C[j,p-1],C[j,N-1]);
//j=argmax[ j <p-1,N-1> ]min(C[j,p-1],C[j,N-1]);

*/
/* ******** step 4 ends ******** */
/*
---------------------------------------
*/
/* ********* step 5 begins ********** */
i=j;
I=[0,j,N-1];
showI(I);
/*//160
for k = p − 1 to 3 with increment k ← k − 1
*/
/*

Min=[];
n=-1;    
loop j <k-1,i-1>
{
val1=C[j,p-1];
val2=C[j,N-1];//120
n++;
point=Min[n]={};
point.index=j;
point.value=Minimum(val1,val2);


----------------------------------

through this loop 
you would be able  to stock the minimums//130
& later after the loop ends , 
we would be able to get the max & the arg max 

-----------------------------------
}//end for j
n++//so that the n matches the length

point=maxAndIndex(Min,n);
//returns an object containing max & arg max
//140
j=point.index;    
// & that 's j= argmax[ j <k-1,i-1>]min(C[j,p-1],C[j,N-1]) 
-------------    

I+=j;
i=j;

}//end for k

*///150
    for(k=p-1;k>2;k--)
    //p-1 refers to the last column index , if p==N
    //j= argmax[ j <k-1,i-1>]min(C[j,p-1],C[j,N-1]) 
    //C[j,N-1] , because the index can't be equal to N , 
    //so the column goes as N-1 !
    {
    Min=[];
    n=-1; 
    startIndex=k-1;
    endIndex=i-1;
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

        
    j=startIndex;
        for(j;j<=endIndex;j++)
        
        {
        /*
        loop j <k-1,i-1>
        {
        val1=C[j,p-1];
        val2=C[j,N-1];
        n++;//160
        point=Min[n]={};
        point.index=j;
        point.value=Minimum(val1,val2);
        
        
        ----------------------------------
        
        through this loop 
        you would be able  to stock the minimums
        & later after the loop ends ,//170 
        we would be able to get the max & the arg max 
        
        -----------------------------------
        }//end for j 
        */
       val1=C[j][p-1];
       val2=C[j][N-1];
       n++;
       point=Min[n]={};
       point.index=j;
       point.value=Minimum(val1,val2);
        
        
        }//end for j
        
    n++//so that the n matches the length
    point=maxAndIndex(Min,n);
    //returns an object containing max & arg max

    j=point.index;    
    // & that 's j= argmax[ j <k-1,i-1>]min(C[j,p-1],C[j,N-1]) 
    var condition=!I.includes(j)
        if(condition)
        {
        console.log("j = "+j);
        
        I.push(j);
        showI(I);//I = [];
        i=j;    

        }

    
    }//end of for k
/*//170

i = j; 
I = [1, j, N];
for k = p − 1 to 3 with increment k ← k − 1
{

Min=[];
n=-1;    
    loop j <k-1,i-1>//180
    {
    val1=C[j,p-1];
    val2=C[j,N-1];
    n++;
    point=Min[n]={};
    point.index=j;
    point.value=Minimum(val1,val2);
    

----------------------------------//190
    
    through this loop 
    you would be able  to stock the minimums
    & later after the loop ends , 
    we would be able to get the max & the arg max 

-----------------------------------
    }//end for j
n++//so that the n matches the length

point=maxAndIndex(Min,n);//200
//returns an object containing max & arg max

j=point.index;    
// & that 's j= argmax[ j <k-1,i-1>]min(C[j,p-1],C[j,N-1]) 
-------------    
I+=j;
i=j;

}//end for k
//210

 log= "The optimal cost : OPT =="+OPT;

Final_Result=log+"& here is the list of Indexes : "+I;

//it's whether you go from 0 to I.length & get the Indexes & then print them out  
//or use the js method as mentionned above ! 
console.log(Final_Result);
//220
*/
var msg= "The optimal cost : OPT =="+OPT;


//it's whether you go from 0 to I.length & get the Indexes & then print them out  
//or use the js method as mentionned above ! 
console.log(msg);

/*//224


checking if step 5 is functionnal ! 

************** step 5 ends **************
---------------------------------------------------//230

*****************THE END*****************
____________________________________________
*/
//------------------------//
//showI(I);//I = [];
function showI(Array)
{
T=Array;
length=T.length;
log="& here is the list of Indexes : [ ";
    for(var i=0;i<length;i++)
    {
    log+=T[i]
    if(i!=length-1)
    {
    log+=' , ';
    }//end of if
    
    }//end of for
log+=" ]";
console.log(log);

}//end of function


//Min[i]=>{index,value}
//maxAndIndex(Min,n);
function maxAndIndex(objectArray,length)
{
var n=length;
T=objectArray;
condition=true;
var point={};
var index=-1;
Max=T[0].value;

for(var i=0;i<length;i++)
{
    while(typeof T[i].value=="undefined" )
    {
    i++; 
        if(i==length)
        {
        index=-1;
        condition=false; 
        break;//get out of the loop               
        } //end if   
    }//end of while
    if(!condition)
    {
    break;//or use the if many times
    }//end of if
point=T[i];
value=T[i].value;


    if( typeof Max=="undefined" )
    {
    Max=value;
    index=point.index;
    //condition=false;
    }//end if 

    if(value>Max)
    {
    Max=value;
    index=point.index;
    }//end of if
}//end for i
point.value=Max;
point.index=index;
return point;



}//end of function

//max(Min,n)//240
function max(Array,length)
{
var n=length;
T=Array;
condition=true;
Max=T[0];

    for(var i=0;i<length;i++)
    {
        while(typeof T[i]=="undefined" )
        {
        i++; 
        console.log(i);
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
    
    value=T[i];
    
  
        if( typeof Max=="undefined" )
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

function Minimum(x,y)
{
min=x; 
    if(min>y)
    {
    min=y;    
    }
return min;
}//end of function

function ShowMatrix(M,n)
{
msg="***** This is the full matrix *****";
console.log(msg)    
    for(i=0;i<n;i++)
    {
    
        for(j=0;j<n;j++)
        {

        msg="C["+i+","+j+"] = "+C[i][j];
        console.log(msg);
        }//end for j


    }//end for i




}//end of function

function random(x)
{//integer random from 0 to x
c=x+1;
return floor(rand(c));

}

function sqrt(x)
{
return M.sqrt(x);    
}
//the difference between (x,y) in each point varies by rand(2) 
//& so every point is Real !

function d(point1,point2)
{
/*

p=point1={};
p.x=18;
p.y=7;
p=point2={};
p.x=p.y=1;
point2;
d(point1,point2);




*/
x1=point1.x;
x2=point2.x;
y1=point1.y;
y2=point2.y;
log="d[("+x1+","+y1+") ; ("+x2+","+y2+")]";

console.log(log);    

exp1=x2-x1  ;
exp1*=exp1;
exp2=y2-y1;
exp2*=exp2;
exp=exp1+exp2;
exp=sqrt(exp);
console.log(exp);
return exp;

//return "("+x1+","+y1+") vs ("+x2+","+y2+")";
}

function rand(x)
{//real Random from 0 to x-1;
return M.random()*x    
}

function floor(x)
{

return M.floor(x);    
}

//x,y=random(100);

function generatePoints(N)
{
    E=[];
    for(i=0;i<N;i++)
    {
    E[i]={};
    point=E[i];

        if(i==0)
        {

        point.x=1+rand(2);
        point.y=50+rand(2);
        }//for the first point 
        else
        {
        point.x=E[i-1].x;
        point.y=E[i-1].y;        
        point.x+=rand(2);        
        point.y-=rand(2);
        }//end if 
    X=point.x;
    Y=point.y;
    log="( "+X+" , "+Y+" )";
    console.log("point "+i+" : "+log)    ;

    }//end for 


return E;

} // end of function 
/*
n=5 ; //Fillling a matrix with js
C=[];
    for(i=0;i<n;i++)
    {
     C[i]=[];
         for(j=0;j<n;j++)
         {
          ue=i*j;
          val="("+i+";"+j+") = "+ue;
          C[i][j]=ue;
          console.log(val); 
         }
    }
-----------------------
**************
3<p<=N
**************
----- Counters & pseudo Code -------- 
*** Matrix Initialisation ****

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
end of step 1
-
******************************************************************
i from 0 to N-1 because we need to go through the whole ligns 
******************************************************************

for i <0 - N-1>
{
C[i,2]=d(E[i],E[0])
}//end for i

//basically this is optimization 

******************************************************************
so that we would assign the column (k==2) a value ,
 only once C[i,k] [i going from 0 to N-1] 

 instead of assigning the column(k==2) with 0 ; 
& then assign it with the Euclidian equation on the next loop ; 

 

besides , if this code is left unoptimized , 

the loop that comes after the initialisation  (having i from 1 to N-1);
the loop wouldn't allow it to assign C[2,0] with a value ; 

that"s why my code is better ! 
******************************************************************

 

---------

**** step3 begins ****


i from 1 to N-1 
{
*******************************
(because we gonna use i-1 & i)
*******************************
    k from 3 to p-1 
    {
    ************************************************************
    because 
    1: k.start ==3 refering to p > 3 
    also k-1 , might refer to 2 , 
    & we already initialized the matrix when column (k==2) 
    as shown in the second loop
    2. k.end == p-1 refering to p<=N ,
    if p==N then k.end is also valid 
    ************************************************************
        
    n=-1;
    Min=[];
        loop j from k-1 to i-1
        {
        EuclidianDistance=d(E[j],E[i]);
        value=C[j,k-1];
        n++;    
        Min[n]=Minimum(value,EuclidianDistance);
        }//end for j 
    
    n++;//so that n would b the length 
        
    C[i,k]=max(Min,n);
    //C[i,k]=max [j <k-1 to i-1> ] min(C[j,k-1],d(E[j],E[i]) )
    
    }//end for k 
}//end for i


end of step3
-----------------------------------
//step 4 begins 

Min=[];
n=-1;
for j <p-1,N-1>    
{   
val1=C[j,p-1];
val2=C[j,N-1];
n++;
point=Min[n]={};
point.index=j;
point.value=Minimum(val1,val2);
    -------------------------------
    in this loop 
    you will be able to get 
    max & argmax
    after the loop ends !
    -------------------------------
}//end for
point=maxAndIndex(Min,n);
//returns an object containing max & arg max
OPT=point.value;
j=point.index;
-----------------------------------
//OPT=max [ j <p-1,N-1> ]min(C[j,p-1],C[j,N-1]);
//j=argmax[ j <p-1,N-1> ]min(C[j,p-1],C[j,N-1]);



************************************************************************
//C[j,N-1] , beacause basically N in not indexed , 
//& N-1 , represents the last column !
basically we gonna get the max & the arg max on the same algorithm , 
Thus , implies that the algorithm provided is not made by a programmer 
& that it is totally flawed as it showns that it is full of flaws , 
mainly with the indexes ! 
************************************************************************
//******** step 4 ends ********
//----------------------------------------

___________________________________________
//********* step 5 begins **********

i = j; 
I = [1, j, N];
for k = p − 1 to 3 with increment k ← k − 1
{
//p-1 refers to the last column index , if p==N
//j= argmax[ j <k-1,i-1>]min(C[j,p-1],C[j,N-1]) 
//C[j,N-1] , because the index can't be equal to N , 
//so the column goes as N-1 !
Min=[];
n=-1;    
    loop j <k-1,i-1>
    {
    val1=C[j,p-1];
    val2=C[j,N-1];
    n++;
    point=Min[n]={};
    point.index=j;
    point.value=Minimum(val1,val2);
    

----------------------------------
    
    through this loop 
    you would be able  to stock the minimums
    & later after the loop ends , 
    we would be able to get the max & the arg max 

-----------------------------------
    }//end for j
n++//so that the n matches the length

point=maxAndIndex(Min,n);
//returns an object containing max & arg max

j=point.index;    
// & that 's j= argmax[ j <k-1,i-1>]min(C[j,p-1],C[j,N-1]) 
-------------    
I+=j;
i=j;

}//end for k


 log= "The optimal cost : OPT =="+OPT;

Final_Result=log+"& here is the list of Indexes : "+I;

//it's whether you go from 0 to I.length & get the Indexes & then print them out  
//or use the js method as mentionned above ! 
console.log(Final_Result);

*/
//********* step 5 ends **********
/*
*****************THE END*****************
*/