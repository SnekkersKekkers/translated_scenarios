switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("L040200002_02_000");
    MsgDisp("Sassa","Damn, this is expensive, right?
Is this really okay?");
    MsgDisp("主人公","I did my best.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("L040200002_02_010");
    MsgDisp("Sassa","I see that......
Is it really okay if I take this?");
    MsgDisp("主人公","Yeah, of course.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200002_02_020");
    MsgDisp("Sassa","Hm, thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(｛颯砂＊＊｝ seemed happy, right?)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200002_02_030");
    MsgDisp("Sassa","Thank you.
Wait, this is expensive, isn't it?");
    MsgDisp("主人公","Yeah, I was excited.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200002_02_040");
    MsgDisp("Sassa","With something this good,
I can't tell you to expect something
better in return.");
    MsgDisp("主人公","Hehe, I'll look forward to it.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("L040200002_02_050");
    MsgDisp("Sassa","Uwah, I dug my own grave.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(｛颯砂＊＊｝ seemed happy!)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("L040200002_02_060");
    MsgDisp("Sassa","Uwah, this looks expensive.
Is it okay if I take it?");
    MsgDisp("主人公","Yeah, it looks tasty.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    ChCheek(2,10);
    VoicePlay("L040200002_02_070");
    MsgDisp("Sassa","Thanks.
I'm kind of glad that you went
out of your way like this for me.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200002_02_080");
    MsgDisp("Sassa","I'll eat it carefully and slowly.");
    MsgDisp("主人公","Hehe, you're very welcome.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChCheek(2,0);
    VoicePlay("L040200002_02_090");
    MsgDisp("Sassa","I can't lose to you either.
Maybe I'll pick up more shifts......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Hehe, he seemed happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
