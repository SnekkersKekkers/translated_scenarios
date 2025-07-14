BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,4,2,4,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323100_03_000");
MsgDisp("Honda","It felt as if my head was being shaken by
a huge hand...
Are you alright?");
MsgSel("That was the best! I want to ride it more!","Uugh, that was scary...","I wanted a bit more thrill...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B040323100_03_010");
    MsgDisp("Honda","Really...?
I'm taking a break for now.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040323100_03_020");
    MsgDisp("Honda","You really have no choice but to surrender
yourself, it's truly frightening.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B040323100_03_030");
    MsgDisp("Honda","Your curiosity is amazing.
Yeah, I also can't give in.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
