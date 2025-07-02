BGOpen("sc230",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("F102130000_21_000");
MsgDisp("Michiru","Mari.");
MsgDisp("主人公","Ah,｛みちる＊｝.
The weather sure is nice today!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F102130000_21_010");
MsgDisp("Michiru","It really is.
Makes you want to go out
somewhere, doesn't it?");
MsgDisp("主人公","Yeah!");
ChClose(21,0,30);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChOpen(21,254,7,0,3,-1,-1,0,1,0,30);
ChOpen(22,254,0,0,3,-1,-1,0,2,0,30);
ChMotion(22,4,1);
VoicePlay("F102130000_22_000");
MsgDisp("Hikaru","Ha～i, Mari▼
Today's weather sure is nice isn't it♪");
MsgDisp("主人公","｛ひかる＊｝!
Yeah, Makes you want to go out
somewhere, doesn't it?");
ChEye(21,3);
ChMouth(21,3);
ChMotion(21,1);
ChEyeOpenLevel(21,0);
VoicePlay("F102130000_21_020");
MsgDisp("Michiru","Hehe!
Oh dear, Mari.
You said the same thing as me.");
MsgDisp("主人公","Ah...really?
Hehe!");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,3,1);
ChEyeOpenLevel(22,10);
VoicePlay("F102130000_22_010");
MsgDisp("Hikaru","Eh, what, what?
What are you talking about～?");
ChEye(22,0);
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("F102130000_21_030");
MsgDisp("Michiru","No.
It's between us.
Right, Mari?");
MsgDisp("主人公","(Hehe!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
