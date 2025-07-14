BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040101100_01_000");
MsgDisp("Kazama","It's no exaggeration when they say it's a
panoramic view of the city!");
MsgSel("Wow! I can see the sun shining on the horizon!","I can see your house from here!","It's so high up I'm almost frozen from fear...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040101100_01_010");
    MsgDisp("Kazama","Alright, alright.
Don't bounce around like that.
It's dangerous.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040101100_01_020");
    MsgDisp("Kazama","...Jeez, can you seriously see it?
Just what kind of palace is this?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    Wait(16,0);
    ChEye(1,4);
    ChMouth(1,3);
    VoicePlay("B040101100_01_030");
    MsgDisp("Kazama","Hey, just don't look down and focus your
attention up.
You'll be okay, okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
