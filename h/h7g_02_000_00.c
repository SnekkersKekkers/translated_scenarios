BGOpen("ho000",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,255,3,0,4,#1,#1,0,0);
VoicePlay("H7G0200000_02_000");
MsgDisp("Sassa","Congrats!
You won an award in the contest, right?");
MsgDisp("主人公","Yeah, that's right.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("H7G0200000_02_010");
MsgDisp("Sassa","Wow.
You're being so casual about it.
I thought you'd be more happy about it.");
MsgDisp("主人公","That's not true.
I'm really happy.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("H7G0200000_02_020");
MsgDisp("Sassa","Hm, I see.
I guess it'd take a calm person like you
to make such delicate works.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("H7G0200000_02_030");
MsgDisp("Sassa","I wanted to come lift you into the air,
but maybe I'll hold back this time.");
MsgDisp("主人公","Huh∋");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("H7G0200000_02_040");
MsgDisp("Sassa","Haha, just kidding. But I really think
you've accomplished something amazing.
Congrats");
MsgDisp("主人公","Thank you, ｛颯砂＊＊｝.");
MsgDisp("主人公","(I don't want to get lifted, but I'm happy
to be congratulated...I'm glad I worked so
hard for the handicrafts club!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
