BGOpen("wf300",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B030303002_03_000");
MsgDisp("Honda","There's the Water Garden,
and the Deep Sea Corner.
Where are you thinking?");
MsgSel("Let's go to the aquarium.","Water Garden sounds nice","Let's go to the Deep Sea Corner");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B030303002_03_010");
    MsgDisp("Honda","Alrighty, it's decided!");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B030303002_03_020");
    MsgDisp("Honda","Yeah, okay!");
    MsgDispSksp(0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMotion(3,3);
    ChMotion(3,3);
    VoicePlay("B030303002_03_030");
    MsgDisp("Honda","You've got my full approval!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
