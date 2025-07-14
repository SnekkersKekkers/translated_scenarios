BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040103200_01_000");
MsgDisp("Kazama","It's like swimming in the sky for them,
huh.
Looks like it feels good.");
MsgSel("Then penguins can fly too!","Like a water slide","There's benches, just like a real park");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040103200_01_010");
    MsgDisp("Kazama","Looks like the penguin march is about to
start. You like that, right? Hey, let's
go.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040103200_01_020");
    MsgDisp("Kazama","A slide without an end point.
Just an endless loop for the fish.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040103200_01_030");
    MsgDisp("Kazama","That's great.
Then they can just sit back and relax.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
