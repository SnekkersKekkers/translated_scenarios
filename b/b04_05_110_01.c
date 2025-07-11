BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B040511001_05_000");
MsgDisp("Hiiragi","The water slide is rather fast.");
MsgSel("Let's try it!","It might be a bit scary","I prefer the normal slide.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040511001_05_010");
    MsgDisp("Hiiragi","Yes, it's a combination of a pool and an
amusement park. It can't be dull. The
concept is amazing!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,2);
    VoicePlay("B040511001_05_020");
    MsgDisp("Hiiragi","Eh, is that so?
I thought you would like it...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040511001_05_030");
    MsgDisp("Hiiragi","That's good too.
Then, let's do that.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
