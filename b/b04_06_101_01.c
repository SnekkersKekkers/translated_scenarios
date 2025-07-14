BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040610101_06_000");
MsgDisp("Himuro","Maybe it would be nice to plan something
here.");
MsgSel("Like making a character cafe?","I think the deserted atmosphere is good though","How about an event for celebrities?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("B040610101_06_010");
    MsgDisp("Himuro","How many times has that been done?
But, that's probably better than doing
nothing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040610101_06_020");
    MsgDisp("Himuro","If that was the case, it would go out of
business.
That would be the end.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040610101_06_030");
    MsgDisp("Himuro","That seems like a easy solution. There are
celebrities from this town after all. And
it could help revitalize the area.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
