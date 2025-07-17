BGOpen("wf300",0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
ScrFadeIn(0);
VoicePlay("B030403002_04_000");
MsgDisp("Nanatsumori","There's a lot to do...
What are you wanting to see?");
MsgSel("Let's go to the aquarium.","Water Garden sounds nice","Let's go to the Deep Sea Corner");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChMotion(4,0,1);
    VoicePlay("B030403002_04_010");
    MsgDisp("Nanatsumori","Alright, let's go.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B030403002_04_020");
    MsgDisp("Nanatsumori","OK.
Oh, we're just in time.
Let's go!");
    MsgDispSksp(0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("B030403002_04_030");
    MsgDisp("Nanatsumori","Eh, but it's dark in there∋
Nothing will show up on camera...");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
