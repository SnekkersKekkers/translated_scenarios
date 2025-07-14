ChPosition(4,0);
Wait(60,0);
ChEye(4,5);
ChMouth(4,2);
ChMotion(4,1,1);
VoicePlay("B080400002_04_010");
MsgDisp("Nanatsumori","...Huh, well.
Did you have some other business?
Did you have other plans?");
MsgDisp("主人公","No, I didn't but...");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("B080400002_04_020");
MsgDisp("Nanatsumori","... Right. I think you should contact them
properly. See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
