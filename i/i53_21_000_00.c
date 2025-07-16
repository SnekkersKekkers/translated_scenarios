BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","My name is
｛主人公苗字｝.
It's my pleasure to work here starting
today.");
VoicePlay("I532100000_49_000");
MsgDisp("Manager","You're working every Tuesday and Thursday.
I look forward to working with you.");
MsgDisp("主人公","Yes, understood.");
MsgDisp("主人公","(Alright, let's do our best!)");
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("I532100000_21_000");
    MsgDisp("Michiru?","Mari, I've been waiting for you.");
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    Wait(15,0);
    ChOpen(21,35,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Huh, ｛みちる＊｝?
You work here?");
    ChMotion(21,3);
    VoicePlay("I532100000_21_010");
    MsgDisp("Michiru","Right.
This place is affiliated with the
Hanatsubaki family.");
    MsgDisp("主人公","I see.
Let's work hard together!");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("I532100000_21_020");
    MsgDisp("Michiru","Yes, let's.
If you have any questions, just ask me.");
    MsgDisp("主人公","(｛みちる＊｝ is so reliable.
I'll have to work hard at this job!)");
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    Wait(15,0);
    ChOpen(21,35,0,0,0,#1,#1,0,0);
    VoicePlay("I532100000_21_030");
    MsgDisp("Michiru","Mari.
Welcome to Princess Tsubaki.");
    MsgDisp("主人公","Huh, ｛みちる＊｝?
You work here?");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,3);
    VoicePlay("I532100000_21_040");
    MsgDisp("Michiru","Hehe. This place is affiliated with the
Hanatsubaki family. That's why, you know?");
    MsgDisp("主人公","I see.
It's a lovely store!");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,4);
    VoicePlay("I532100000_21_050");
    MsgDisp("Michiru","Right.
Let's have fun working together.");
    MsgDisp("主人公","I'm looking forward to it!");
    MsgDisp("主人公","(Yeah, let's work hard and have fun!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    Wait(15,0);
    ChOpen(21,35,3,0,0,#1,#1,0,0);
    VoicePlay("I532100000_21_060");
    MsgDisp("Michiru","Mari, welcome.");
    MsgDisp("主人公","Huh, ｛みちる＊｝?
You work here?");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,4);
    VoicePlay("I532100000_21_070");
    MsgDisp("Michiru","Right.
I couldn't wait to see you after I heard
you were coming to work here, Mari......");
    MsgDisp("主人公","Hehe.
I'm looking forward to working with you.");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("I532100000_21_080");
    MsgDisp("Michiru","Let's not be so formal.
We'll just have fun and enjoy each other's
company, okay?");
    ChEye(21,3);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("I532100000_21_090");
    MsgDisp("Michiru","Ask me about anything you don't
understand.
I'll support you with all my strength.");
    MsgDisp("主人公","Thanks!");
    MsgDisp("主人公","(｛みちる＊｝ is so reliable.
I'll have to work hard at this job!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
