MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
ScrFadeIn(0);
VoicePlay("B040312101_03_000");
MsgDisp("Honda","Those handmade accessories are amazingly
well-made.");
MsgSel("I wonder if I should try making some too?","Are you going to buy it?","Why don't you try making some too, ｛本多＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040312101_03_010");
    MsgDisp("Honda","Yeah, challenge yourself.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040312101_03_020");
    MsgDisp("Honda","I wonder?
Maybe we should negotiate the price.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B040312101_03_030");
    MsgDisp("Honda","I don't think I can do such delicate work.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
