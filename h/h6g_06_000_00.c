BGOpen("ho000",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("H5G0600000_06_000");
MsgDisp("Himuro?","...Ah, there you are.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Huh, ｛氷室＊＊｝?
What's up?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("H5G0600000_06_010");
MsgDisp("Himuro","I thought I'd come here and congratulate
you. You won the grand prize in our
gardening club's competition, right?");
MsgDisp("主人公","Ah, yeah.
You found out pretty quickly.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("H5G0600000_06_020");
MsgDisp("Himuro","If anything, I'm late.
The whole school is talking about it
already.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("H5G0600000_06_030");
MsgDisp("Himuro","I guess when you keep doing what you love,
you'll get results like these.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("H5G0600000_06_040");
MsgDisp("Himuro","It's pretty hard to do something like
that.
Really, congrats.");
MsgDisp("主人公","(I did it!
I'm really glad I stayed in the gardening
club!)");
MsgClose();
ScrFadeOut(0,0);
