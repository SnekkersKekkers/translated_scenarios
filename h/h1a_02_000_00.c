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
    ChOpen(2,254,3,3,3,0,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("H1A0200000_02_000");
    MsgDisp("Sassa","｛主人公｝.
They did it, you guys won!");
    MsgDisp("主人公","Yeah, we won, ｛颯砂＊＊｝!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("H1A0200000_02_010");
    MsgDisp("Sassa","Congrats.
Everyone was able to give it their all
thanks to their manager.");
    MsgDisp("主人公","(I'm so happy.
I'm glad that I stayed as the baseball
club manager!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
