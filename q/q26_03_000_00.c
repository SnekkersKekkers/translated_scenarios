SEPlay("EV_SE_700");
SEWait();
BGOpen("sc815",2);
ChOpen(3,30,0,4,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("Q260300000_03_000");
MsgDisp("Honda","……∈");
VoicePlay("Q260300000_03_010");
MsgDisp("Honda","So it really was you∋");
MsgDisp("主人公","Eh, ｛本多＊＊｝?
So just now, I......");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
ChCheek(3,8);
VoicePlay("Q260300000_03_020");
MsgDisp("Honda","It's, something soft suddenly......");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,5,1);
ChEyeOpenLevel(3,0);
VoicePlay("Q260300000_03_030");
MsgDisp("Honda","S-Sorry!");
SEPlay("EV_SE_799");
ChClose(3);
SEWait();
MsgDisp("主人公","(Eeeeh∋
So that means that that feeling
was ｛本多＊＊｝......?)");
MsgClose();
ScrFadeOut(0,0);
