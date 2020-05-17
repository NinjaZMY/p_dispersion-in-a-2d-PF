#include <iostream> 	
#include <cmath>
#include <fstream>

#include "instance.hpp"

using namespace std;


//Constructeur de la classe Instance
void Instance::import(string filename) {

    points.clear();
    std::pair<float, float> point;

    string ligne;
    string posX;
    string posY;

    float X;
    float Y;

    ifstream file;
    file.open(filename);

    if (file.good() != true)
    {
        cout << "Fatal error : unable to read file " << filename << "!" << endl;
        exit(EXIT_FAILURE);
    }

    int posEspace;

    /* Format de file : deux flottants par ligne, séparés par un espace */
    cout << "Importing dataset..." << endl;

    // On ignore la première ligne
    getline(file, ligne);

    while (!file.eof())
    {
        try
        {
            getline(file, ligne);
            posEspace = ligne.find(' ');

            posX = ligne.substr(0, posEspace);
            X = stof(posX, nullptr);

            posY = ligne.substr(posEspace, ligne.length());
            Y = stof(posY, nullptr);

            point = make_pair(X, Y);
            //std::cout << "ajout point" << point.first << " " << point.second<< endl;
            points.push_back(point);
        }
        catch (invalid_argument&)
        {
            cout << "Exception invalid argument. Continue." << endl;
        }
    }

    file.close();
}


void Instance::display() {
	cout<<"Liste des points de l'instance:\n";
	 for (vector<pair<float, float>>::iterator it = points.begin() ; it != points.end(); ++it)
	    cout << "(" << it->first << " , " << it->second << ") ";
	 cout << endl;
	}


int Instance::getSize(){ return points.size(); }


float Instance::distance(int i, int ii){
    return sqrt(pow((points[i].first -points[ii].first),2.0)+pow((points[i].second -points[ii].second),2.0));
}

float Instance::distance(int i, int ii, float a){
    return pow(pow((points[i].first -points[ii].first),2.0)+pow((points[i].second -points[ii].second),2.0), 0.5 *a);
}

