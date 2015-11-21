#include <stdlib.h>
void *DetectCats(CvArray *input, void *output){
  struct kitteny *topnode = malloc(sizeof(struct kitteny));
  //Hough int array line squared theta omega pi rho
  CvArray* catDog4;
  Canny(input, catDog4, 50, 200, 3);
  Vec2f* catCats93;
  HoughLines(catDog4, catCats93, CV_PI/180, 100, 0, 0);

  Vec4i Kitten52;
  Kitten52 = catCats[0];
  

  for( size_t i = 1; i < sizeof(catCats93); i++ ){
    Kitten52 = catCats93[i];
    
