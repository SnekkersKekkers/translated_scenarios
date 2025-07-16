BGOpen("sc500",1);
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
ChOpen(21,254,7,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("F122100000_21_000");
MsgDisp("Michiru","Mari.
Let's go home together.");
MsgDisp("主人公","Ah, ｛みちる＊｝.
Sure, let's go.");
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
ChMotion(21,0);
ScrFadeIn(0);
VoicePlay("F122100000_21_010");
MsgDisp("Michiru","Hey, it's almost Valentine's Day.
Did you know?");
MsgDisp("主人公","Oh, yeah.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F122100000_21_020");
MsgDisp("Michiru","It's a big day for a girl in love.
However...");
MsgDisp("主人公","What are you doing,
｛みちる＊｝?");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,5);
VoicePlay("F122100000_21_030");
MsgDisp("Michiru","I'm good.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("F122100000_21_040");
MsgDisp("Michiru","Hikaru and I can help out Mari's love.
Is that alright?");
MsgDisp("主人公","(Valentine's Day...)");
MsgClose();
ScrFadeOut(0,0);
