#include "../include/complex.h"
#include "../include/drawingfunctions.h"
#include <raylib.h>
#include <string>

#include <iostream>
#include <cstdlib>
#include <vector>
#include "complex.h"



std::vector<int> cordTranslator(std::vector<int> kek){
    return {(kek[0]*30)/4, (kek[1]*30)/4};
}

void drawCNumber(int r, int i, int screenWidth, int screenHeight, Color color){

    std::vector<int> cordinates = cordTranslator({r, i});
 
    DrawCircle(screenWidth/2+cordinates[0], screenHeight/2-cordinates[1], 10, color);
}




int main(int argc, char* argv[]){
    if (argc != 6) {
        std::cout << "Usage: " << argv[0] << " <operation> <real> <imaginary> <initial_real> <initial_imaginary>" << std::endl;
        return 1;
    }
    std::string operation = argv[1];
    int real = std::atoi(argv[2]);
    int imaginary = std::atoi(argv[3]);
    int initialReal = std::atoi(argv[4]);
    int initialImaginary = std::atoi(argv[5]);

    int screenWidth = 2000;
    int screenHeight = 2000;

    InitWindow(screenWidth, screenHeight, "Complex Plane");
    
    

    std::vector<int> kek = {initialReal, initialImaginary};
    std::cout<<kek[1]<<std::endl;

    std::string op;
    Complex<int> C(kek);
    if (operation == "add") {
        C.addition(real, imaginary);
        op = "+";
        
    } else if (operation == "subtract") {
        C.subtraction(real, imaginary);
        op = "-";
    }else if(operation == "multiply"){
        op = "x";
        C.multiply(real, imaginary);
    }else if(operation == "divide"){
        C.divide(real, imaginary);
        op = "/";
    }else {
        std::cout << "Invalid operation. Use 'add' or 'subtract'." << std::endl;
        return 1;
    }
    std::vector<int> cordinates = C.getValue();
    std::string initialRealStr = std::to_string(initialReal);
    std::string initialImaginaryStr = std::to_string(initialImaginary);
    std::string realStr = std::to_string(real);
    std::string imaginaryStr = std::to_string(imaginary);

    // Create the formatted string
    std::string formattedString = "(" + initialRealStr + " + " + initialImaginaryStr + "i) " + op + " (" + realStr + " + " + imaginaryStr + "i)";

    // Now you can use formattedString with DrawText

    

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(GRAY);
        DrawRectangle(200,600, 250, 140, BLACK);
        DrawText("Old Z = BLUE", 220, 610, 20, BLUE);
        DrawText("New Z = RED", 220, 640, 20, RED);
       
        DrawText(formattedString.c_str(), 220, 680, 20, WHITE);

        drawCNumber(kek[0], kek[1], screenWidth, screenHeight, BLUE);
        drawCNumber(cordinates[0], cordinates[1], screenWidth,screenHeight, RED);
        
        graphBackground(screenWidth, screenHeight);
        
    
        EndDrawing();
    }
    return 0;
}
