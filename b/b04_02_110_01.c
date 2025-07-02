BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040211001_02_000");
MsgDisp("Sassa","Heeh, we can ride on a 
float down the watersldie?");
MsgSel("Seems fun!","It seems a little scary though","There's a two seater one▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("B040211001_02_010");
    MsgDisp("Sassa","Yeah, must be fun.
Let's go!");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040211001_02_020");
    MsgDisp("Sassa","Right right!
It's a bit scary, but 
that adds the best spice.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040211001_02_030");
    MsgDisp("Sassa","I didn't know about that.
Then, shall we try that one?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
