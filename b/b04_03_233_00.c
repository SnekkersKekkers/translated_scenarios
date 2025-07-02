BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,0,4,4,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323300_03_000");
MsgDisp("Honda","We're...on the ground, right?");
MsgSel("I could get used to this thrill!","Hey, that's enough...","That was a very interesting experience...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("B040323300_03_010");
    MsgDisp("Honda","I wonder if there's an 
addictive aspect to it...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040323300_03_020");
    MsgDisp("Honda","Is that so? I'm glad.
It's important to have the 
same sense of values.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,2);
    ChMouth(3,0);
    ChMotion(3,2);
    VoicePlay("B040323300_03_030");
    MsgDisp("Honda","Yeah yeah,
I don't think I'll ever forget the 
feeling I had the moment I jumped.
...In many ways.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
