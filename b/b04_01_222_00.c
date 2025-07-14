BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040122200_01_000");
MsgDisp("Kazama","Some of the artifacts here were donated by
my Ojii-chan.");
MsgSel("You can feel the weight of history","Is that sword real?","The history of the Kazuma family is the history of Habataki City.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040122200_01_010");
    MsgDisp("Kazama","right. We're here like this today, because
of the efforts of everyone in the past.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040122200_01_020");
    MsgDisp("Kazama","What do you mean by real?
If a sword from 500 years ago was remade
300 years ago, is it a fake?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040122200_01_030");
    MsgDisp("Kazama","It's because my Ojii-chan carefully
protected these cultural assets that we
can experience history like this.");
    MsgDispSksp(1,0);
    ChEye(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
