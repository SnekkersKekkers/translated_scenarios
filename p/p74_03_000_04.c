MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yayー!
A huge success∈)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,4,4,3,#1,#1,0,0);
VoicePlay("P740300004_03_000");
MsgDisp("Honda","Haa, I'm glad...");
MsgDisp("主人公","Yeah, I finished without falling.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("P740300004_03_010");
MsgDisp("Honda","I wasn't worried about that.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("P740300004_03_020");
MsgDisp("Honda","I'm glad that the bride didn't disappear
to some far off place.");
MsgDisp("主人公","Eh?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("P740300004_03_030");
MsgDisp("Honda","I just felt like that.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("P740300004_03_040");
MsgDisp("Honda","Congratulations on your last cultural
festival being a success!
You were truly beautiful.");
MsgDisp("主人公","(｛本多＊＊｝,thank you...
I'm glad I continued with the handicrafts
club for the last three years...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
