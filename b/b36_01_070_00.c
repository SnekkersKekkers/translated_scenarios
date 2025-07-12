MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ne710",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B360107000_01_000");
MsgDisp("Kazama","...It should be about time.");
MsgDisp("主人公","Hm? What is?");
ChMouth(1,0);
VoicePlay("B360107000_46_000");
MsgDisp("Clerk","Starting now, we have a 
half-price limited sale!");
SEPlay("EV_SE_511",0.3);
SEPlay("EV_SE_843",0.5,0.5);
Wait(50,0);
ChMouth(1,3);
ChMotion(1,0);
MsgDisp("主人公","Eh∋　A half price sale!
｛風真＊＊｝, did you know?");
SEStop("EV_SE_511",2);
SEStop("EV_SE_843",2);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B360107000_01_010");
MsgDisp("Kazama","Yeah, you like 
bargains don't you?");
MsgDisp("主人公","...Yeah.
What about you, ｛風真＊＊｝?");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B360107000_01_020");
MsgDisp("Kazama","Hmmm?
I like it I guess.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360107000_01_030");
MsgDisp("Kazama","Seeing you happy about
the bargains that is.");
MsgDisp("主人公","Hey...
I can buy two for the same price!
Double the bargain.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B360107000_01_040");
MsgDisp("Kazama","That's right.
Today was also a 2-in-1 date, right?");
MsgDisp("主人公","Hehe, that's right.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360107000_01_050");
MsgDisp("Kazama","Right now, I'm the only 
one who can see you smile.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
VoicePlay("B360107000_01_060");
MsgDisp("Kazama","Come on, weren't you 
going to buy two?");
MsgDisp("主人公","Ah, wait up!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
BGMStop();
ScrFadeOut(0,0);
SEWait();
ChOpen(1,255,7,0,0,#1,#1,0,0,0,0);
