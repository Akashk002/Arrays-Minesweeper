#pragma once
#include <SFML/Graphics.hpp>
#include <../../header/UI/UIElement/ButtonView.h>
#include "CellController.h"
#include "../../UI/UIElement/ButtonView.h"

using namespace UI::UIElement;

namespace Gameplay
{
    namespace Cell
    {
        class CellController;

        class CellView
        {
        private:

            const int tile_size = 32;
            int slice_count = 12;

            UI::UIElement::ButtonView* cell_button;
            CellController* cell_controller;

            void initializeButtonImage(float width, float height);

        public:
            CellView(CellController* controller);
            ~CellView();

            void initialize(float width, float height);
            void update();
            void render();
            void setCellTexture();
            void registerButtonCallback();
            void cellButtonCallback(UI::UIElement::ButtonType button_type);

            const float cell_top_offset = 274.f;
            const float cell_left_offset = 583.f;
            sf::Vector2f getCellScreenPosition(float width, float height);
        };
    }
}