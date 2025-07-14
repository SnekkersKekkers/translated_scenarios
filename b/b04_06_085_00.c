BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040608500_06_000");
MsgDisp("Himuro","There's a lonely feeling to the forest
park in winter, isn't there?");
MsgSel("This is a world built on transient beauty.","Even though I'm here?","I like it.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040608500_06_010");
    MsgDisp("Himuro","Like Monk Sen no Rikyu? Not bad.
Excellent.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040608500_06_020");
    MsgDisp("Himuro","That's not what I was talking about.
Were you listening?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040608500_06_030");
    MsgDisp("Himuro","Heh, you see it differently to me. Tell me
more about it. That's right; how about we
sit over on that bench and talk.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
