#pragma once
#include <sfml/Graphics.hpp>
#include "CellModel.h"

namespace Gameplay
{
    namespace Cell
    {
        class CellView;

        class CellController
        {
        private:
            CellView* cell_view;
            CellModel* cell_model;

            void destroy();

        public:
            CellController(int cell_index);
            ~CellController();

            void initialize(float width,float height);
            void update();
            void render();
            void reset();
            CellState getCellState();
            CellValue getCellValue();
            sf::Vector2i getCellPosition();
            int getCellIndex();
        };
    }
}