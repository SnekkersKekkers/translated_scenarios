switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc620",0);
    ChLayout(1);
    MsgClose();
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H1A2100000_21_000");
    MsgDisp("Michiru","Congratulations on winning!");
    MsgDisp("主人公","｛みちる＊｝, thank you!");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,4);
    VoicePlay("H1A2100000_21_010");
    MsgDisp("Michiru","It was such a good match.
I was very impressed.");
    MsgDisp("主人公","(I'm glad that I stayed as the baseball
club manager!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc620",0);
    ChLayout(1);
    MsgClose();
    ChOpen(21,254,7,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H1A2100000_21_020");
    MsgDisp("Michiru","Mari, congratulations on winning!");
    MsgDisp("主人公","Thank you, ｛みちる＊｝!
It's because everyone did their best!");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,4);
    VoicePlay("H1A2100000_21_030");
    MsgDisp("Michiru","Though I think I'd say it was thanks to
you, Mari?");
    MsgDisp("主人公","That's......");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,0);
    VoicePlay("H1A2100000_21_040");
    MsgDisp("Michiru","Hehe. Those baseball players are quite
lucky, no?");
    MsgDisp("主人公","(I'm glad that I stayed as the baseball
club manager!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
