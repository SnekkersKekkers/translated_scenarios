BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040515101_05_000");
MsgDisp("Hiiragi","I see.
So even people with weak skills
can get good scores");
MsgSel("There are skilled women players, after all!","But it's still about strength, right?","Shall we take a lesson together?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040515101_05_010");
    MsgDisp("Hiiragi","This is the iron law of any art.
Today we shall carefully observe 
all the skilled players!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,1);
    VoicePlay("B040515101_05_020");
    MsgDisp("Hiiragi","That's rather blunt.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("B040515101_05_030");
    MsgDisp("Hiiragi","Agreed.
Maybe this way, we can both relinquish
being unskilled at it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
