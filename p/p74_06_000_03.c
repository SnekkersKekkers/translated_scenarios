MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I fell..
The dress was also ruined...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,0,0,0,-1,-1,0,0);
VoicePlay("P740600003_06_000");
MsgDisp("Himuro","Good work.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝...");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("P740600003_06_010");
MsgDisp("Himuro","Why are you making such a face?");
MsgDisp("主人公","That's because, I fell...
my dress also...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P740600003_06_020");
MsgDisp("Himuro","Let bygones be bygones?
Even if you regret it now,
it won't fix it.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P740600003_06_030");
MsgDisp("Himuro","Just accept that you did
everything that you could?");
MsgDisp("主人公","Yeah...");
MsgDisp("主人公","(｛氷室＊＊｝...
That's right, I failed,
but I need to get over it...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
