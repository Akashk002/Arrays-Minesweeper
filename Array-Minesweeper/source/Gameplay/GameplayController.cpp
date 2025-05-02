#include "../../header/Gameplay/GameplayController.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Gameplay/Board/BoardService.h"
using namespace Global;

namespace Gameplay
{
	GameplayController::GameplayController() {
		// Constructor implementation
	}

	void GameplayController::reset()
	{
		ServiceLocator::getInstance()->getBoardService()->resetBoard();
	}
	void GameplayController::updateRemainingTime()
	{
		remaining_time -= ServiceLocator::getInstance()->getTimeService()->getDeltaTime();
	}
	void GameplayController::update()
	{
		updateRemainingTime();
	}
	float GameplayController::getRemainingTime()
	{
		return remaining_time;
	}

	int GameplayController::getMinesCount()
	{
		return 10;
	}

}