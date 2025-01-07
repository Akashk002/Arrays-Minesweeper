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

			UIElement::TextView* time_text;
			void update();
			void render();
			void updateTimeText();
			void createTexts();
			void initialize();
			void initializeTexts();
			void initializeTimeText();
			void show();

		};
	}
}