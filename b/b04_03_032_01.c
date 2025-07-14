BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040303201_03_000");
MsgDisp("Honda","It's a well-thought-out exhibit, huh?
Being able to look up at aquatic creatures
from below.");
MsgSel("That seal's belly looks soft.","Penguins swim so fast!","Cold! Some water splashed on me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040303201_03_010");
    MsgDisp("Honda","Yup - you can see their abdomen clearly
from below. The body fat percentage of
seals is 50% - if it were a human, it
would have to improve its lifestyle!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040303201_03_020");
    MsgDisp("Honda","Right, the long tube-shaped tank here
makes the experience special. On land and
underwater give completely different
impressions");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040303201_03_030");
    MsgDisp("Honda","Yeah, the water temperature is supposed to
match the living environment of the
organisms.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
