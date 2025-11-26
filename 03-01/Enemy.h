#pragma once
class Enemy
{
public:

	void Approach();//接近
	void Shot();//射撃
	void Withdrawal();//離脱

	void Updata();

	bool IsFinish() { return isFinish_; }

private:

	int phase_ = 0;

	static void (Enemy::*UpdateTable[])();

	bool isFinish_=false;


};

