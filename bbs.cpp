#include "bbs.h"

//default constructor
BBS::BBS()
{
	//default insecure params
	this->p = 11;
	this->q = 19;
	//seed
	this->x0 = 4;
	//product of P & Q
	this->n = p * q;
}

/*
    set object parameters
    @param blum prime number p
    @param blum prime number q
    @param integer seed
*/
void BBS::setParams(long p, long q, long seed)
{
	//choose p and q such that gcd(p, q) = 1
	this->p = p;
	this->q = q;
	//random seed should be netween 1 & n-1
	this->x0 = seed;
	//blum integer
	this->n = p * q;
}

/*
    overloaded constructor
    @param blum prime number p
    @param blum prime number q
    @param integer seed
*/
BBS::BBS(long p, long q, long seed)
{
	this->setParams(p, q, seed);
}

/*
    Get next random number
*/
long BBS::getRandNum()
{
	long nextRandNum = (this->x0 * this->x0) % this->n;
	this->x0 = nextRandNum;
	return nextRandNum;
}

/*
    Get next random bit
*/
int BBS::getRandBit()
{
	return this->getRandNum() % 2;
}

void BBS::setP(long p)
{
	this->p = p;
}

void BBS::setQ(long q)
{
	this->q = q;
}

void BBS::setSeed(long seed)
{
	this->x0 = seed;
}

BBS::~BBS(){}
