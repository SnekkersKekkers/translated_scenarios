BGOpen("ar200",0);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C06_INORI_A");
ChOpen(6,35,0,0,0,#1,#1,0,0);
VoicePlay("G110600801_06_000");
MsgDisp("Himuro","Good work today.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Are you heading home already?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600801_06_010");
MsgDisp("Himuro","Yeah, from here I'm headed to the sea.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,10);
VoicePlay("G110600801_06_020");
MsgDisp("Himuro","Are you coming too......?");
MsgDisp("主人公","Is that okay? Then please excuse me!");
MsgClose();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ev006",1);
BGMVol(0.5,2);
ChOpen(6,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110600801_06_030");
MsgDisp("Himuro","......Flowers, do you like them?");
MsgDisp("主人公","I like them.
I started getting attached to them
whilst I was on the part time job.");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600801_06_040");
MsgDisp("Himuro","You always smile at the flowers whilst
you're working, don't you?");
MsgDisp("主人公","Eh, is that so?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("G110600801_06_050");
MsgDisp("Himuro","You were unaware? Then, you're a diehard
fanatic.");
MsgDisp("主人公","Maybe it's a bit embarrassing......");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600801_06_060");
MsgDisp("Himuro","Isn't it a good thing?
......And it's a pretty nice expression.");
MsgDisp("主人公","Eh......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChCheek(6,10);
VoicePlay("G110600801_06_070");
MsgDisp("Himuro","Don't be shy about it. 
......I'm drawn to it..");
MsgDisp("主人公","(Hehe, I was praised by
｛氷室＊＊｝......!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
