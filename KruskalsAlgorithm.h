/*************************************************************************
 * Developer: Raymond Tyler
 * File: KruskalsAlgorithm.h
 * Date: April 10, 2013
 *************************************************************************
 * Description: This is the header file for the KruskalsAlgorithm class.
 *************************************************************************/


#ifndef _KRUSKALSHEADERS
#define _KRUSKALSHEADERS

#include "Edge.h"
#include "EdgeHeap.h"
#include "DisjointSet.h"
#include "MinimumSpanningTreeAlgorithm.h"

class KruskalsAlgorithm : public MinimumSpanningTreeAlgorithm
{
public: 
	KruskalsAlgorithm(char const*);
	~KruskalsAlgorithm();
	void findMinimumSpanningTree();
	void print();
	void printMST();
	
private:
	int MSTindex;
	Edge *MSTedges;
	disjointSet *DisjointS;
};

#endif
