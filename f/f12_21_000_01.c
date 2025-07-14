BGOpen("sc500",1);
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("F122100001_21_000");
MsgDisp("Michiru","Mari. Let's go home together.");
MsgDisp("主人公","Ah, ｛みちる＊｝. Sure, let's go.");
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc000",1);
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
ScrFadeIn(0);
VoicePlay("F122100001_21_010");
MsgDisp("Michiru","Hey, Mari.
Are you ready?");
MsgDisp("主人公","Ready?
Oh, Valentine's Day!");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("F122100001_21_020");
MsgDisp("Michiru","Ha, you do things at your own pace.
That's cute too, though.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("F122100001_21_030");
MsgDisp("Michiru","It's Mari, so I can't leave you alone.
Well, how about I help you out?");
MsgDisp("主人公","Ah, thank you!");
ChEye(21,3);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F122100001_21_040");
MsgDisp("Michiru","Hehe.");
MsgDisp("主人公","(Right, Valentine's Day is coming up...)");
MsgClose();
ScrFadeOut(0,0);
