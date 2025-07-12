MsgClose();
BGOpen("ho000",2);
ChNanaType(#1);
ChOpen(4,253,1,0,0,#1,#1,0,0);
VoicePlay("B080400001_04_020");
MsgDisp("Nanatsumori","What's wrong.
Did you get a weird phone call?");
MsgDisp("主人公","No, it's fine.
Sorry.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B080400001_04_030");
MsgDisp("Nanatsumori","That's fine then.
Well, goodnight.");
MsgDisp("主人公","Yeah, goodnight.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(4);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
