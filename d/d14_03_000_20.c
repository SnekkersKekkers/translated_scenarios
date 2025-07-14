ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
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
ChMotion(7,2);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,5);
VoicePlay("D140300000_03_040");
MsgDisp("Honda","Ahー, I see. But, you will have days where
you feel like that. Then, I'll see you
later?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.7);
BGMStop();
ChClose(3,0,30);
