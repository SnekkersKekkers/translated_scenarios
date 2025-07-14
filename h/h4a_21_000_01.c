BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,0,0,0,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H4A2100001_21_000");
    MsgDisp("Michiru","Good work.");
    MsgDisp("主人公","｛みちる＊｝. I showed you a weird
performance......");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,3);
    VoicePlay("H4A2100001_21_010");
    MsgDisp("Michiru","Hehe! I'm sorry, I shouldn't laugh, but
you know...... I still enjoyed it.");
    MsgDisp("主人公","(......Ugh. But I'm glad I stayed in the
rhythmic gymnastics club.)");
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,0,4,4,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H4A2100001_21_020");
    MsgDisp("Michiru","Mari.");
    MsgDisp("主人公","｛みちる＊｝...... I messed up my
performance.");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,2);
    VoicePlay("H4A2100001_21_030");
    MsgDisp("Michiru","Hm.
I suppose that's so.");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,3);
    VoicePlay("H4A2100001_21_040");
    MsgDisp("Michiru","But other than that, you were on top.
Really.");
    MsgDisp("主人公","Thank you......");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,4);
    VoicePlay("H4A2100001_21_050");
    MsgDisp("Michiru","Cheer up. I'll give Mari a special award.
Okay?");
    MsgDisp("主人公","(｛みちる＊｝...... I lost, but I'm
glad I stayed in the rhythmic gymnastics
club.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
