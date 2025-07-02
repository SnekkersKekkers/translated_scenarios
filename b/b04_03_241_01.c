BGOpen("tr510",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040324101_03_000");
MsgDisp("Honda","There's even a milking experience!");
MsgSel("Waa, looks fun!","It might be a bit scary","T-that's embarrassing.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040324101_03_010");
    MsgDisp("Honda","Yep yep, I want to 
drink freshly-squeezed milk!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040324101_03_020");
    MsgDisp("Honda","Right right, 
when it comes to handling animals,
it's better safe than sorry!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040324101_03_030");
    MsgDisp("Honda","Embarassing?
Why is that?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
