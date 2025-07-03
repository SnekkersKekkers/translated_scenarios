BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,2,0,0,0,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623401_06_000");
MsgDisp("Himuro","...Haa, that was embarrassing.");
MsgSel("Why?","So shy, Himuro♪","The trick is to just take the offensive");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623401_06_010");
    MsgDisp("Himuro","You won't get it
even if I tell you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623401_06_020");
    MsgDisp("Himuro","...Ha?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040623401_06_030");
    MsgDisp("Himuro","Thanks for the advice.
...Whether I can put it into 
practice is another story.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
