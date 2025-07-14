BGOpen("wf300",0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030203002_02_000");
MsgDisp("Sassa","Where do you want to go today?");
MsgSel("Let's go to the aquarium.","Water Garden sounds nice.","Let's go to the Deep Sea Corner.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B030203002_02_010");
    MsgDisp("Sassa","Alright, I agree.
This kind of matching taste is a pretty
good thing.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B030203002_02_020");
    MsgDisp("Sassa","You got it.
Let's go.");
    MsgDispSksp(0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B030203002_02_030");
    MsgDisp("Sassa","Alright!
I was curious about that, too.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
