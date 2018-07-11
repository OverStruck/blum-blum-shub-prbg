#include <cmath>
#include<iostream>

class BBS
{
private:
	long p, q, n, x0, decryptionExp;

public:
	BBS();
	~BBS();
	BBS(long p, long q, long seed);

	void setP();
	void setQ();
	void setSeed();
	int getRandBit();
	long getRandNum();
	void setParams(long p, long q, long seed);
};
