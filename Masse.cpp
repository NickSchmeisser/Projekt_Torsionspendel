/*
 * Masse.cpp
 *
 *  Created on: 10.06.2019
 *      Author: nick
 */

#include "Masse.h"
#include<iostream>
#include <cmath>
using namespace std;
typedef array<double, 2> v2;

Masse::Masse() {
	// TODO Auto-generated constructor stub

}
Masse::Masse(const double& pMasse, const double& pAbst, const double& pTraeghm, const double& pRai, const double& pRaa, const double& pLaen){
	masse[1]= pMasse;
	masse[2]=0;
	abst[1]=pAbst;
	abst[2]=0;
	traegheitsm[1]=pTraeghm;
	traegheitsm[2]=0;
	rai[1]=pRai;
	rai[2]=0;
	raa[1]=pRaa;
	raa[2]=0;
	laen[1]=pLaen;
	laen[2]= 0;
	this->berechneTraeghm();
}

Masse::Masse(const double& pMasse, const double& pAbst, const double& pTraeghm, const double& pRai, const double& pRaa, const double& pLaen, const double& dMasse, const double& dAbst, const double& dTraeghm, const double& dRai, const double& dRaa, const double& dLaen){
	masse[1]= pMasse;
	masse[2]=dMasse;
	abst[1]=pAbst;
	abst[2]=dAbst;
	traegheitsm[1]=pTraeghm;
	traegheitsm[2]=dTraeghm;
	rai[1]=pRai;
	rai[2]=dRai;
	raa[1]=pRaa;
	raa[2]=dRaa;
	laen[1]=pLaen;
	laen[2]= dLaen;
	this->berechneTraeghm();
}

void Masse::setMasse(const double& pMasse,const double& pFehler){
	masse[1]=pMasse;
	masse[2]=pFehler;
}


void Masse::setAbst(const double& pAbst, const double& pFehler){
	abst[1]=pAbst;
	abst[2]=pFehler;
}
void
Masse::setRai(const double& pRai, const double& pFehler){
	rai[1]=pRai;
	rai[2]=pFehler;
}

void
Masse::setRaa(const double& pRaa, const double& pFehler){
	raa[1]=pRaa;
	raa[2]=pFehler;
}
void
Masse::setLaen(const double& pLaen, const double& pFehler){
	laen[1]=pLaen;
	laen[2]=pFehler;
}



Masse::getMasse(){
	return masse;
}
v2
Masse::getAbst(){
	return abst;
}
v2
Masse::getRai(){
	return rai;
}
v2
Masse::getRaa(){
	return raa;
}
v2
Masse::getLaen(){
	return laen;
}

void
Masse::berechneTraeghm(){}
Masse::~Masse() {
	// TODO Auto-generated destructor stub
}

