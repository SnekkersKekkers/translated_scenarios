BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040608300_06_000");
MsgDisp("Himuro","It might be a bit cooler at the
waterfront.");
MsgSel("Is that so?","Feels nice...","Actually I want to get into the water");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040608300_06_010");
    MsgDisp("Himuro","Well, it's mostly warm.
It is summer after all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040608300_06_020");
    MsgDisp("Himuro","It's visually refreshing too.
Let's cool off here a little more.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040608300_06_030");
    MsgDisp("Himuro","I'm not joining you.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
