BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,4);
VoicePlay("B040503100_05_000");
MsgDisp("Hiiragi","This is a large water tank.
There's also a lot of life.");
MsgSel("What's the name of that fish?","The pattern of the tropical fish are so pretty▼","Huh∋　I feel something looking at me from behind the rock...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    VoicePlay("B040503100_05_010");
    MsgDisp("Hiiragi","That fish...
which fish?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040503100_05_020");
    MsgDisp("Hiiragi","It looks like a stage costume.
It's an occupational disease huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040503100_05_030");
    MsgDisp("Hiiragi","It's a person on the other side.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
