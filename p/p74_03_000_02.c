MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, 
Seems like it was somewhat of a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,5,0,3,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("P740300002_03_000");
MsgDisp("Honda","｛主人公｝,
COngratulations!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("P740300002_03_010");
MsgDisp("Honda","It feels strange to see you here standing 
in front of me, when you were on
stage just a moment ago.");
MsgDisp("主人公","Ehh?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("P740300002_03_020");
MsgDisp("Honda","You were that beautifully stylish.
Next time, teach me how to model walk too!");
MsgDisp("主人公","(Yayー!
｛本多＊＊｝ praised me!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
