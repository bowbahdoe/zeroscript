static float pos1[3];static float pos3[3];static float pos5[3];
static unsigned int counter;
void setup(){pos1[0]=800;pos1[1]=800;pos1[2]=0;pos3[0]=800;pos3[1]=-800;pos3[2]=0;pos5[0]=-2500;pos5[1]=-800;pos5[2]=0;}
void loop(){if(counter>= 2 && counter <= 34){api.setPositionTarget(pos1);}else if(counter == 35){game.dropSPS();}else if(counter>= 36 && counter <= 79){api.setPositionTarget(pos3);}else if(counter == 80){game.dropSPS();}else if(counter>= 81 && counter <= 159){api.setPositionTarget(pos5);}else if(counter == 160){game.dropSPS();}counter++;}
