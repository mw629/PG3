#pragma once
#include "Command.h"

class RightCommand :public Command
{
public:
	virtual ~RightCommand() = default;
	void Execute(int& pos)override;
};

