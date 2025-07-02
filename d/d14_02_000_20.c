ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ChMotion(4,0,1);
ChEye(5,2);
ChMouth(5,3);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("D140200000_02_040");
MsgDisp("Sassa","I see...
If you feel like it another time, 
come and join us.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.7);
BGMStop();
ChClose(2,0,30);
