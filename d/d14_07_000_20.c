ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
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
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D140700000_07_040");
MsgDisp("Mikage","I see.
I guess I'm in that sort of mood, too.
See you later, then.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.7);
BGMStop();
ChClose(7,0,30);
