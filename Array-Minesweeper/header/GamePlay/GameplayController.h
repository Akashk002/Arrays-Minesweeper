#pragma once

namespace Gameplay
{
	class GameplayController
	{
	private:
		float remaining_time;
	public:

		const int font_size = 110;
		const sf::Color text_color = sf::Color::Red;

		const float time_text_top_offset = 65.f;
		const float time_text_left_offset = 1090.f;

		UI::UIElement::TextView* time_text;

		GameplayController();
		~GameplayController();

		void initialize();
		void update();
		void render();
		void reset();

		void updateRemainingTime();
		float getRemainingTime();

		int getMinesCount();
	};
}