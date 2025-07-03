SEPlay("EV_SE_700");
BGOpen("sc815",2);
ChLayout(1);
MsgClose();
ChOpen(2,30,5,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("Q260200000_02_000");
MsgDisp("Sassa","So it really was......");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("Q260200000_02_010");
MsgDisp("Sassa","You ∋");
MsgDisp("主人公","Eh, ｛颯砂＊＊｝?
Wait, so that was......");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,2);
ChCheek(2,10);
VoicePlay("Q260200000_02_020");
MsgDisp("Sassa","Sorry, I'm sure I hit
you somewhere......");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("Q260200000_02_030");
MsgDisp("Sassa","My bad.
S-Sorry!");
MsgClose();
SEPlay("EV_SE_799");
MsgClose();
ChClose(2);
SEWait();
MsgDisp("主人公","(Eeh∋
Then, that thing just now was......?)");
MsgClose();
ScrFadeOut(0,0);
