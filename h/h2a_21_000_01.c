BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,4,2,4,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H2A2100001_21_000");
    MsgDisp("Michiru","Hey, don't make that face, okay?");
    MsgDisp("主人公","｛みちる＊｝, we lost...");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,3);
    VoicePlay("H2A2100001_21_010");
    MsgDisp("Michiru","You might have lost, but everyone did
their best. It was truly wonderful. Okay?");
    MsgDisp("主人公","(That's right. We might have lost, but I'm
glad that I stayed as the track and field
club manager...)");
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C21_MICHIRU_A",0.01);
    ChOpen(21,254,4,4,4,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H2A2100001_21_020");
    MsgDisp("Michiru","Good work, Mari.");
    MsgDisp("主人公","｛みちる＊｝, we lost...");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,3);
    VoicePlay("H2A2100001_21_030");
    MsgDisp("Michiru","That's true.");
    ChEye(21,0);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("H2A2100001_21_040");
    MsgDisp("Michiru","But Mari, please smile?
It's the manager's job to cheer up the
team members who did their best, right?");
    MsgDisp("主人公","...Yes!");
    ChEye(21,4);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("H2A2100001_21_050");
    MsgDisp("Michiru","Good smile.
Then, give all the players a pat on the
back, okay?");
    MsgDisp("主人公","(｛みちる＊｝... We might have lost, but
I'm glad that I stayed as the track and
field club manager!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
