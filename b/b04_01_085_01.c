BGOpen("fp200",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040108501_01_000");
MsgDisp("Kazama","There are rumors about other living things
here besides the fireflies, right?");
MsgSel("A guardian spirit?","Want to drop something in the pond?","Huh, it's that cold in the gazebo?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108501_01_010");
    MsgDisp("Kazama","Yeah, that's what I mean. Like a turtle
that's been alive for decades. There has
to be a spirit in a pond, right?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108501_01_020");
    MsgDisp("Kazama","Yeah, I do.
...Hey, wait!
I don't have an axe or anything.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040108501_01_030");
    MsgDisp("Kazama","Why are you just assuming a person?
Wouldn't it be a creature?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
