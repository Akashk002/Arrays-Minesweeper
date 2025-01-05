#pragma once
#include <SFML/Graphics.hpp>
#include <../../header/UI/UIElement/ButtonView.h>
#include "CellController.h"

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
        };
    }
}