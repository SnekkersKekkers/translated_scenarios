BGOpen("wf400",1);
ChLayout(1);
ChOpen(1,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay.","Today's event was awful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040104200_01_000");
    MsgDisp("Kazama","Yeah, even better than I thought it'd be.
I wonder how they practice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040104200_01_010");
    MsgDisp("Kazama","Guess so. It felt like things we had
probably seen before.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040104200_01_020");
    MsgDisp("Kazama","What's up? It's rare for you to give such
a harsh criticism.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
