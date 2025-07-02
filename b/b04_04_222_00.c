BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040422200_04_000");
MsgDisp("Nanatsumori","I don't know where to start or
how I should look at it.");
MsgSel("Of course, we're studying historu1","Isn't there an air of long ago?","That's not a good way of putting it.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,-1);
    VoicePlay("B040422200_04_010");
    MsgDisp("Nanatsumori","I've had my fill from
the lessons at school.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040422200_04_020");
    MsgDisp("Nanatsumori","I can feel the history.
Is there anything else I
can gain from that?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040422200_04_030");
    MsgDisp("Nanatsumori","Ah... sorry.
There are guests who are enjoying
themselves. I wasn't being considerate
enough, sorry.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
}