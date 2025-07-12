BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,4,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
ChMotion(5,3);
VoicePlay("B040523300_05_000");
MsgDisp("Hiiragi","Such a thing existed in this world.
I still have much to learn.");
MsgSel("I could get used to this thrill!","That's quite enough...","It was a very interesting experience...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("B040523300_05_010");
    MsgDisp("Hiiragi","Yes, let's jump again.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040523300_05_020");
    MsgDisp("Hiiragi","That's right, don't worry about it.
I know I'm a bit peculiar.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040523300_05_030");
    MsgDisp("Hiiragi","Is that in a positive sense?
I'd be happy if it were.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
