#include <iostream>
#include "images/myImage.h"
#include "commands/command.h"

const std::string doorPath = "image/input/door.jpg";
const std::string skiingPath = "image/input/skiing.jpg";
const std::string smogPath = "image/input/smog.jpg";
const std::string grayScale = "image/output/grayScale.jpg";
const std::string horsePath = "image/input/horse.jpg";
const std::string templePath = "image/input/temple.jpg";
const std::string pepperPath = "image/input/peppers.png";
const std::string smallPath = "image/input/small.png";

using namespace Image;

int main () {
  myImage image = myImage(smallPath);

  image.convertToGrayScale();
  image.outputImage(grayScale);
  Command::execute("band", image);
  image.freeImage();   
}