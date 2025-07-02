BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040609001_06_000");
MsgDisp("Himuro","Are you interested in plants?");
MsgSel("Only the subtropical ones!","Is that surprising?","It's not really like that.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040609001_06_010");
    MsgDisp("Himuro","So you have a bias.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040609001_06_020");
    MsgDisp("Himuro","Not really.
Isn't that good? People who like
greenery have a kind image.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040609001_06_030");
    MsgDisp("Himuro","Then, what's the point of coming here?
I don't get it.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
