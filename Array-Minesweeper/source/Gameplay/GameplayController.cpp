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
}