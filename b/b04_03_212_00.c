BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040321200_03_000");
MsgDisp("Honda","Yep yep, they have a full product lineup.
What do you want?");
MsgSel("Maybe the bear plushie","The animal encyclopedia is nice","The wooden sword?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040321200_03_010");
    MsgDisp("Honda","The Asian Black Bear huh?
I thought it would be a deformed one,
but it's pretty realistic.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040321200_03_020");
    MsgDisp("Honda","I think I want that too.
I heard it was compiled by the zoo!");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040321200_03_030");
    MsgDisp("Honda","Haha, your taste is great.
Next time, go even bolder.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
