#include "raylib.h"

const int ScreenWidth = 1000;
const int ScreenHeight = 800;

/* We assume a datatype Rectangle that contains the layout during the 
   computation and is global to the procedure squarify. */
struct Rectangle_
{
    int x;
    int y;
    int w;
    int h;
};

/*
int head(int[] arr)
{

}

int[] tail(int[] arr)
{

}
*/

/* gives the highest aspect ration of a list of rectangles, given the length 
   of the side along which they are to be laid out. */
/*
int worst(int row[], int w)
{

}
*/

/* gives the highest aspect ratio of a list of rectangles, given the length of 
   the side along which they are to be laid out. */
/*
int width()
{
    return 0;
}
*/

/* adds a new row of children to the rectangle */
/*
void layoutrow(int[] row)
{

}
*/

/*
int[] concatenate(int[] a, int b)
{

}
*/

/* This procedure lays out the rectangles in horizontal and vertical rows. 
   When a rectangle is processed, a decision is made between two alternatives. 
   Either the rectangle is added to the current row, or the current row is 
   fixed and a new row is started in the remaining subrectangle. This decision 
   depends only on whether adding a rectangle to the row will improve the 
   layout of the current row or not. */
/*
void squarify(int[] children, int[] row, int w)
{squarified-treemap
    int c = head(children);

    if(worst(row, w) <= worst(concatenate(row, c), w)
    {
        squarify(tail(children), concatenate(row, c), w);   
    }
    else
    {
        layoutrow(row);
        squarify(tail(children), width());   
    }
}
*/

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(ScreenWidth, ScreenHeight, "Title here");

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)

    SetTargetFPS(60); // Set our game to run at 60 frames-per-second

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
        //---------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
