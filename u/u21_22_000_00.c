BGOpen("ne000",0);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(22,255,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("U212200000_22_000");
MsgDisp("Hikaru","Hey.
Can you give me your hand?");
MsgDisp("主人公","What?
......Jewelry?");
ChMotion(22,0,1);
VoicePlay("U212200000_22_010");
MsgDisp("Hikaru","Yeah. Hikaru got it for work but
doesn't need it anymore. Mari can use it
if she wants to.");
MsgDisp("主人公","Are you sure?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
ChEyeOpenLevel(22,0);
VoicePlay("U212200000_22_020");
MsgDisp("Hikaru","It's fine, you can have it▼");
MsgDisp("主人公","Thank you, ｛ひかる＊｝!");
