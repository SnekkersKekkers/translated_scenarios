BGMStop();
BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Umm, 
the blackout curtains I prepared——");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P830D00001_22_000");
MsgDisp("Hikaru","Hii～, Mari♪
You're hard at work, huh?");
MsgDisp("主人公","Ah, ｛ひかる＊｝, ｛みちる＊｝!");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("P830D00001_21_000");
MsgDisp("Michiru","Don't push yourself too hard, we came to
check up on you.");
MsgDisp("主人公","Hehe, thank you.
I'm managing supplies just now.");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("P830D00001_22_010");
MsgDisp("Hikaru","Seems troublesome...");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P830D00001_21_010");
MsgDisp("Michiru","Hehe. As expected of the second time.
Mari, you're so cool.");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
