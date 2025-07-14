BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("D012100100_21_000");
MsgDisp("Michiru?","......There you are!");
MsgDisp("主人公","?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.5);
ChOpen(21,35,3,0,3,#1,#1,0,0);
VoicePlay("D012100100_21_010");
MsgDisp("Michiru","Hey, Mari, do you have some time?");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(21);
BGMPlay("BGM_C21_MICHIRU_A",0.01);
StlOpen("ev_21_02");
StlEye(21,0);
StlMouth(21,0);
Wait(20,0);
ScrFadeIn(0);
VoicePlay("D012100100_21_020");
MsgDisp("Michiru","Okay.
Thanks for waiting.");
MsgDisp("主人公","Woah, so cute!
Are these all Japanese sweets?");
StlEyeOpenLevel(21,5);
VoicePlay("D012100100_21_030");
MsgDisp("Michiru","That's right. The concept is \"Light Sweets
for Japanese Teenagers\". I made them
myself.");
VoicePlay("D012100100_21_040");
MsgDisp("Michiru","I wanted them to look pretty but also have
a mild and sweet taste.");
MsgDisp("主人公","I'm curious to know how they taste......!");
StlEyeOpenLevel(21,#1);
VoicePlay("D012100100_21_050");
MsgDisp("Michiru","Right?
Why don't you give them a try.");
MsgDisp("主人公","Is it really okay?");
StlEyeOpenLevel(21,5);
VoicePlay("D012100100_21_060");
MsgDisp("Michiru","Hehe. Of course. I prepared them for this
reason, so please enjoy.");
MsgDisp("主人公","Okay, thanks for the food!");
MsgDisp("主人公",".........! ｛みちる＊｝, these are
amazing! So yummy and the texture is
completely new to me......!");
StlEye(21,1);
VoicePlay("D012100100_21_070");
MsgDisp("Michiru","What a relief!
I can relax now that I have Mari's
approval.");
StlEye(21,0);
MsgDisp("主人公","Hehe!
Hey, why don't you try too?");
StlEyeOpenLevel(21,5);
VoicePlay("D012100100_21_080");
MsgDisp("Michiru","Okay, just one bite......");
SEPlay("EV_SE_667");
StlNear(1,0,0);
StlMouth(21,1);
Wait(20,0);
StlEye(21,1);
VoicePlay("D012100100_21_090");
MsgDisp("Michiru","......Mmm, delicious!
I'd say it's a great success▼");
MsgDisp("主人公","(｛みちる＊｝ looks really happy! I
think these sweets will be successful! As
expected of ｛みちる＊｝......! )");
BGMStop();
MsgClose();
ScrFadeOut(0);
StlClose();
ChPrmTblAdd(21,1);
