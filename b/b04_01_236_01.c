BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040123601_01_000");
MsgDisp("Kazama","You can't go home without 
seeing this light parade.");
MsgSel("Let's save a spot next time.","Hehe, you really love this huh?","How much firefly power is this?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123601_01_010");
    MsgDisp("Kazama","ＯＫ!
Next time we'll be front row.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,7);
    ChCheek(1,7);
    VoicePlay("B040123601_01_020");
    MsgDisp("Kazama","What's up with the \"Hehe\"?
Don't treat me like a kid.
Everyone loves this kind of thing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040123601_01_030");
    MsgDisp("Kazama","50000 fireflies?
Don't go making up new units.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
