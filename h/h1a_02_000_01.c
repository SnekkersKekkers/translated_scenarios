BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    ChOpen(2,254,2,0,0,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H1A0200001_02_000");
    MsgDisp("Sassa","｛主人公｝,
it's too bad.");
    MsgDisp("主人公","｛颯砂＊＊｝......
We lost. It's frustrating.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("H1A0200001_02_010");
    MsgDisp("Sassa","It would be frustrating.
I'm not really a fan of empty words of
comfort.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("H1A0200001_02_020");
    MsgDisp("Sassa","So instead, really, good work.
Take as much time as you need to
feel better.");
    MsgDisp("主人公","(｛颯砂＊＊｝, thank you.
Haa, it really is frustrating......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
