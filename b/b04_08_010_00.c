BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040801000_08_000");
MsgDisp("Shirahane","Ah! Hows 'bout this? I think it suits ya a
lot.");
MsgSel("Really, I'll go buy it!","I wonder about that...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChMotion(8,3,1);
    VoicePlay("B040801000_08_010");
    MsgDisp("Shirahane","Hehe! If it's you, I think ya can pull off
anythin', but this is my favourite.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,4);
    VoicePlay("B040801000_08_020");
    MsgDisp("Shirahane","I think it suits you...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("B040801000_08_030");
    MsgDisp("Shirahane","Don't get so angry...
Sorry if ya didn't like it...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
