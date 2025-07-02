BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040208301_02_000");
MsgDisp("Sassa","In the daytime,
what are the fireflies doing?");
MsgSel("Maybe in the water?","Maybe they're taking a break somewhere","Maybe they're on a trip somewhere?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040208301_02_010");
    MsgDisp("Sassa","That's not it?
They'll go back to being larvae.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040208301_02_020");
    MsgDisp("Sassa","Year, the real show is at night time.
They're probably doing some flexibility
training or stretching.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040208301_02_030");
    MsgDisp("Sassa","Crap.
We might've come to an empty house.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
