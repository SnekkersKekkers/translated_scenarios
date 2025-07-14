BGOpen("tr520",0);
ChLayout(1);
ChSet(7,0,1);
ChMouth(7,3);
ScrFadeIn(0);
ChMotion(7,1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B040724200_07_000");
MsgDisp("Mikage","Today we're going to cook rice and curry
in the camping kit. Split into groups then
start your preparations!");
MsgSel("Curry during camping is the best!","I'll do my best preparing the vegetables!","I brought some excellent instant curry.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040724200_07_010");
    MsgDisp("Mikage","That's right.
Everyone makes it, everyone eats it.
It can't be bad.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040724200_07_020");
    MsgDisp("Mikage","Those vegetables were all beauties grown
at the gardening club.
Please prepare them deliciously.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040724200_07_030");
    MsgDisp("Mikage","Too early, that's the
last resort.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
