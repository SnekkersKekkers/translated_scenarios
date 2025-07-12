BGOpen("wf400",1);
ChLayout(1);
ChOpen(6,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was wonderful wasn't it!","Today's event was so-so huh","Today's event was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,4);
    ChMouth(6,4);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040604400_06_000");
    MsgDisp("Himuro","Yeah.
My heart is still pounding...
It was truly wonderful...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040604400_06_010");
    MsgDisp("Himuro","If we go on another day, there
might be an artist that suits you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040604400_06_020");
    MsgDisp("Himuro","...But I came here with you.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
