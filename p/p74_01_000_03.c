MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Aaah, it was a fail.
I fell down...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,0,2,#1,#1,0,0);
VoicePlay("P740100003_01_000");
MsgDisp("Kazama","You're not injured, are you?");
MsgDisp("主人公","Ah, ｛風真＊＊｝...
Yeah, I'm okay.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P740100003_01_010");
MsgDisp("Kazama","It's because you're always restless.
Move slowly and carefully.");
MsgDisp("主人公","Yeah...");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P740100003_01_020");
MsgDisp("Kazama","Well, good work.");
MsgDisp("主人公","(Haaa I'm usually careful...
Maybe I didn't practice enough during the
preparation period.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
