#pragma once
#include "Command.h"

class LeftCommand:public Command
{
public:
	virtual ~LeftCommand() = default;
	void Execute(int& pos)override;
};

