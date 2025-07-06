BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B040703200_07_000");
MsgDisp("Mikage","We get to observe the penguins from a
unique angle.");
MsgSel("Let's run under the tube.","I want to swim with them too.","The penguins are starting to walk.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040703200_07_010");
    MsgDisp("Mikage","Don't do that,
you'll run into people.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040703200_07_020");
    MsgDisp("Mikage","Hahaha, that'll be a good contest.
There are studies that show that
penguins don't swim very fast.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040703200_07_030");
    MsgDisp("Mikage","Oh, that's good.
Penguins look like they're bi-pedal, 
upright walkers but they're not.
Take a good look.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
