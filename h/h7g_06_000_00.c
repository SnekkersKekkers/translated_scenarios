BGOpen("ho000",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("H8G0600000_06_000");
MsgDisp("Himuro?","Ah, good timing.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Huh, ｛氷室＊＊｝?
What is it?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("H8G0600000_06_010");
MsgDisp("Himuro","You mean to say you really don't know?
I heard you got the gold award in the
design contest.");
MsgDisp("主人公","Ah, yes.
I did it!");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("H8G0600000_06_020");
MsgDisp("Himuro","Right.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("H8G0600000_06_030");
MsgDisp("Himuro","But I know just how patiently you've been
working on it, so I'm not that surprised.");
MsgDisp("主人公","Hehe.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("H8G0600000_06_040");
MsgDisp("Himuro","I'm glad your efforts paid off.
...... Congrats.");
MsgDisp("主人公","(I'm so happy......
I'm glad I worked so hard for the
handicrafts club!)");
MsgClose();
ScrFadeOut(0,0);
