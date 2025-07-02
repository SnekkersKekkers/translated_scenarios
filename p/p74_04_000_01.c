MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(uuughh, I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
VoicePlay("P740400001_04_000");
MsgDisp("Nanatsumori","Good work.
Are you okay?");
MsgDisp("主人公","｛七ツ森＊｝, I...");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P740400001_04_010");
MsgDisp("Nanatsumori","It can't be helped.
You were stressed to the maxx.
I'm glad you're not injured.");
MsgDisp("主人公","(Haa...
MAybe I didn't practice enough...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
