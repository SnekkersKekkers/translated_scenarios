MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I fell...
even though this was my last show...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,0,4,4,#1,#1,0,0);
VoiceEVSPlay(5);
VoicePlay("P740500005_05_000");
MsgDisp("Hiiragi","｛主人公｝, you're not injured, are
you?");
MsgDisp("主人公","Y-Yeah...");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P740500005_05_010");
MsgDisp("Hiiragi","Phew... that looked dangerous. I couldn't
bare to watch.");
MsgDisp("主人公","Yeah, 
my walk was completely terrible...");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("P740500005_05_020");
MsgDisp("Hiiragi","You looked so beautiful wearing a wedding
dress");
ChEye(5,4);
VoicePlay("P740500005_05_030");
MsgDisp("Hiiragi","It was difficult to resist the urge to go
to your side and link arms with you.");
MsgDisp("主人公","｛柊＊＊＊｝...");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("P740500005_05_040");
MsgDisp("Hiiragi","Is that okay?
You made a wonderful dress.");
ChMotion(5,0);
VoicePlay("P740500005_05_050");
MsgDisp("Hiiragi","It was unfortunate that you fell, but
please firmly hold your head up high.");
MsgDisp("主人公","(Thank you, ｛柊＊＊＊｝... I failed in
the end, but I'm glad I continued with the
handicrafts club for three years.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
