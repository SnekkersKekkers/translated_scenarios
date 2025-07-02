BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040315201_03_000");
MsgDisp("Honda","My own darts...
Should I buy some?");
MsgSel("It's too early for your own darts.","It's dangerous to throw them at home","Then, let's match!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,2);
    ChMotion(3,2);
    VoicePlay("B040315201_03_010");
    MsgDisp("Honda","But it's fun to start with the gear,
right?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040315201_03_020");
    MsgDisp("Honda","When you throw them, the door opens
and your family comes in.
That happens, that happens.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040315201_03_030");
    MsgDisp("Honda","Yea, yea, sounds good.
A pair of darts!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
