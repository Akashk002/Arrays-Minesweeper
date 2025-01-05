#pragma once
#include "../../header/UI/UIElement/ImageView.h"
#include "../../UI/UIElement/ImageView.h"

using namespace UI :: UIElement;
namespace Gameplay
{
    namespace Board
    {
        class BoardController;

        class BoardView
        {
        private:
            BoardController* board_controller;
            ImageView* background_image;

        public:
            BoardView(BoardController* controller);
            ~BoardView();

            const float background_alpha = 85.f;
            ImageView* board_image ;
            const float board_width = 866.f;
            const float board_height = 1080.f;
            const float board_width_offset = 115.f;
            const float board_height_offset = 329.f;

            void initialize();
            void update();
            void render();
            void initializeBackgroudImage();
            void initializeBoardImage();
            float getCellWidth();
            float getCellHeight();
        };
    }
}