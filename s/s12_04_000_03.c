BGOpen("ho000",0);
ChLayout(1);
ChEye(4,0);
ChEye(4,0);
ChMotion(4,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("S120400003_04_000");
    MsgDisp("Nanatsumori","Time to go.");
    MsgDisp("主人公","Thank you for coming with me!
Treat me well this year, too.");
    ChMotion(4,1,1);
    VoicePlay("S120400003_04_010");
    MsgDisp("Nanatsumori","Yeah, same to you.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S120400003_04_020");
    MsgDisp("Nanatsumori","Geez...you're still full of energy even at
the end.");
    MsgDisp("主人公","Really?");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S120400003_04_030");
    MsgDisp("Nanatsumori","Yeah.
Seeya.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4,0,30);
    Wait(30);
    MsgDisp("主人公","(This is another New Year.
I hope it's a good one...)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Thank you for coming with me.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("S120400003_04_040");
    MsgDisp("Nanatsumori","No, thank you.
You're such a sweet girl.");
    MsgDisp("主人公","Hehe.");
    ChEye(4,4);
    ChMouth(4,3);
    VoicePlay("S120400003_04_050");
    MsgDisp("Nanatsumori","...Treat me well again this year, okay?");
    MsgDisp("主人公","Yeah, same to you.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S120400003_04_060");
    MsgDisp("Nanatsumori","Okay.
See you later.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4,0,30);
    Wait(30);
    MsgDisp("主人公","(A New Year, huh...
I hope it's a good one...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
