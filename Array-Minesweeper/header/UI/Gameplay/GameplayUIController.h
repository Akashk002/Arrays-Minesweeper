#pragma once
#pragma once
#include "../../header/UI/Interface/IUIController.h"
#include "../../../header/UI/UIElement/TextView.h"
#include "../../../header/UI/UIElement/ButtonView.h"
#include <SFML/Graphics.hpp>

namespace UI
{
	namespace GameplayUI
	{
		class GameplayUIController : public Interface::IUIController
		{
		public :
			GameplayUIController();
			~GameplayUIController();

			const int font_size = 110;
			const sf::Color text_color = sf::Color::Red;

			const float time_text_top_offset = 65.f;
			const float time_text_left_offset = 1090.f;

			const float mine_text_top_offset = 65.f;
			const float mine_text_left_offset = 660.f;

			const float restart_button_top_offset = 100.f;
			const float restart_button_left_offset = 920.f;

			const float button_height = 80.f;
			const float button_width = 80.f;

			const int tile_height = 32;

			UIElement::ButtonView* restart_button;
			UIElement::TextView* mine_text;
			UIElement::TextView* time_text;
			void update();
			void render();
			void destroy();
			void updateTimeText();
			void createTexts();
			void initialize();
			void initializeTexts();
			void initializeTimeText();
			void show();
			void initializeMineText();
			void updateMineText();
			void createButton();
			void initializeButton();
			void registerButtonCallback();
			void restartButtonCallback();

		};
	}
}