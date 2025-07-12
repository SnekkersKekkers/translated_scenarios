BGOpen("wf400",1);
ChLayout(1);
ChOpen(1,253,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay.","Today's event was awful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040104500_01_000");
    MsgDisp("Kazama","For a play based on local history,
it was pretty entertaining!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0,1);
    VoicePlay("B040104500_01_010");
    MsgDisp("Kazama","I thought it was fine,
what part did you not like?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040104500_01_020");
    MsgDisp("Kazama","As a resident of Habataki City,
how can you be totally unaffected by this?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
