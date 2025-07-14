MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, it was a huge success!)");
MsgClose();
ChOpen(31,254,4,0,0,#1,#1,0,0);
VoicePlay("P743100000_31_000");
MsgDisp("Goro","Your show was a huge success, huh!");
MsgDisp("主人公","Ah, Goro-sensei!");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,1);
VoicePlay("P743100000_31_010");
MsgDisp("Goro","The modeling was perfect too.
It's like I'm looking at a younger version
of myself▼");
MsgDisp("主人公","(Yay, a huge success!
I got praised by Goro-sensei♪)");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
