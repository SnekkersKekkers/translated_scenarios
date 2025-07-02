BGOpen("ho000",2);
ChLayout(1);
ChOpen(3,255,5,0,4,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B150300500_03_000");
MsgDisp("Honda","Phew, I managed to hold on...");
MsgDisp("主人公","Ah... I did it again...");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B150300500_03_010");
MsgDisp("Honda","It's okay. Besides, I'm the one 
who told you not to stop.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("B150300500_03_020");
MsgDisp("Honda","So have you figured it out now? 
Why you touch me?");
MsgDisp("主人公","Er...");
ChMouth(3,4);
VoicePlay("B150300500_03_030");
MsgDisp("Honda","…………");
MsgDisp("主人公","S-sorry.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B150300500_03_040");
MsgDisp("Honda","...It's fine. But in return, can you
forgive me for this?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(3);
SEWait();
MsgDisp("主人公","Huh——");
SEPlay("EV_SE_504");
SEWait();
ChLayout(0);
SEPlay("EV_SE_544");
ChOpen(3,255,4,0,4,-1,-1,0,0);
VoicePlay("B150300500_03_050");
MsgDisp("Honda","I figured it out. That overflowing feeling
that felt like it might burst while you
were touching me——");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("B150300500_03_060");
MsgDisp("Honda","I think it's this. My own feelings of 
wanting to touch you more. Way more than 
just a little.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("B150300500_03_070");
MsgDisp("Honda","I've been unconsciously holding it back, 
trying not to notice, but... I guess I 
reached my limit.");
MsgDisp("主人公","｛本多＊＊｝...");
ChClose(3);
ChLayout(1);
ChOpen(3,255,5,3,3,0,-1,0,0);
VoicePlay("B150300500_03_080");
MsgDisp("Honda","Ah, I feel reset now! Yeah, I'm good now.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B150300500_03_090");
MsgDisp("Honda","Well, I'm heading home. Thanks for today!
See you around?");
MsgDisp("主人公","Yeah... see you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3,0,30);
MsgClose();
ScrFadeOut(0,0);
