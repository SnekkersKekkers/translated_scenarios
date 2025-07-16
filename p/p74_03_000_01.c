MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Uuugh, I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,1,0,4,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("P740300001_03_000");
MsgDisp("Honda","｛主人公｝, are you
alright?");
MsgDisp("主人公","Yeah...
But, I fell in such a flashy way...");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("P740300001_03_010");
MsgDisp("Honda","That's right, huh.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("P740300001_03_020");
MsgDisp("Honda","But your style of walking was the best.
You were leaping about happily.");
MsgDisp("主人公","(Uuugh....
I should have practiced more during the
preparation period...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
