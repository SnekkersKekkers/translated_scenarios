BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,5);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040303300_03_000");
MsgDisp("Honda","The deep-sea corner has been relaunched!
That's so interesting!!");
MsgSel("There are loads of grotesque fish, huh?","Wow, that fish has a huge mouth!","Wow, what a beautiful light...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChSet(3,0,1);
    VoicePlay("B040303300_03_010");
    MsgDisp("Honda","That's how they adapted to their deep-sea
environment.
I find them unique.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoiceEVSPlay(3);
    VoicePlay("B040303300_03_020");
    MsgDisp("Honda","｛主人公｝, nice observation! In the deep
sea at depths of 200 meters or more,
having that mouth is necessary for
efficiently capturing prey.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040303300_03_030");
    MsgDisp("Honda","Oops, you got caught.
That's how they lured creatures, and then
with that big mouth - snap!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
