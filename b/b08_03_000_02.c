ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4);
ChEyeOpenLevel(3,-1);
VoicePlay("B080300001_03_020")MsgDisp("Honda","Did something happen?");
MsgDisp("主人公","No, it's nothing.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("B080300001_03_030")MsgDisp("Honda","Really? That's good then.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("B080300001_03_040")MsgDisp("Honda","Well, good night. See you later.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(3);
MsgDisp("主人公","...yeah. Good night.");
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
