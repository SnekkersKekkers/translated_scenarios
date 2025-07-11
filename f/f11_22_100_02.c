BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(22,254,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(22,3,1);
VoicePlay("F112210002_22_000");
MsgDisp("Hikaru","He～ey, Mari!");
MsgDisp("主人公","｛ひかる＊｝!
Here to be my cupid this year?");
ChMotion(22,0,1);
VoicePlay("F112210002_22_010");
MsgDisp("Hikaru","No, Hikaru can't.");
MsgDisp("主人公","Huh? Why not?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("F112210002_22_020");
MsgDisp("Hikaru","Because last year, while we talked love,
the school festival ended!
We couldn't look around at all.");
MsgDisp("主人公","R—right.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F112210002_22_030");
MsgDisp("Hikaru","So, this year, cupid is closed.
Hikaru wanst to enjoy her last 
school festival!");
MsgDisp("主人公","Okay!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,1,1);
VoicePlay("F112210002_22_040");
MsgDisp("Hikaru","...Oh, look.
Those two people over there look 
like a couple.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F112210002_22_050");
MsgDisp("Hikaru","Hikaru will go now!
See you later～");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(22);
MsgDisp("主人公","(Haha.
In the end, cupid's leaving me!)");
MsgClose();
ScrFadeOut(0,0);
