MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(1,0,0);
BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_785");
Wait(50,0);
VoicePlay("B360115100_01_000");
MsgDisp("Kazama","Alright.");
MsgDisp("主人公","｛風真＊＊｝, amazing∈
You kept getting strikes
one after the other.");
MsgClose();
ChOpen(1,255,7,0,3,#1,#1,0,0);
ChMotion(1,3);
VoicePlay("B360115100_01_010");
MsgDisp("Kazama","Yeah, I mean,
you're energetic after all
that fuss, aren't you?");
MsgDisp("主人公","Hehe, 
it's ｛風真＊＊｝ after all.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360115100_01_020");
MsgDisp("Kazama","That's right.
Alright, then if the next one is 
also a strike, I want a reward.");
MsgDisp("主人公","A reward?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,2);
ChEyeOpenLevel(1,0);
VoicePlay("B360115100_01_030");
MsgDisp("Kazama","Right.
If we're talking celebration... 
something like a kiss.");
MsgDisp("主人公","Ehhh∋");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B360115100_01_040");
MsgDisp("Kazama","Well, watch carefully!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(1);
MsgDisp("主人公","Wait a second, ｛風真＊＊｝?");
SEWait();
SEPlay("EV_SE_785");
Wait(60,0);
MsgClose();
ChOpen(1,255,4,4,2,0,#1,7,0);
VoicePlay("B360115100_01_050");
MsgDisp("Kazama","............");
MsgDisp("主人公","｛風真＊＊｝,
Umm... wasn't it my turn just now?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
ChCheek(1,5);
VoicePlay("B360115100_01_060");
MsgDisp("Kazama","...Ah.
My bad.");
MsgDisp("主人公","I can't give you
a reward right?");
ChEye(1,2);
ChMouth(1,1);
ChMotion(1,3);
ChCheek(1,0);
VoicePlay("B360115100_01_070");
MsgDisp("Kazama","Eh!");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChCheek(1,0);
