BGOpen("fp600",0);
ChLayout(1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B030811100_08_000");
MsgDisp("Shirahane","Ain't skatin' just excitin'?");
MsgDisp("主人公","Haha!
Do you like to go skating?");
MsgDispSksp(1,0);
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,2,1);
ChEyeOpenLevel(8,0);
ChCheek(8,5);
VoicePlay("B030811100_08_010");
MsgDisp("Shirahane","I love it!
Wanna hold hands and skate together?
...Hehe!");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
