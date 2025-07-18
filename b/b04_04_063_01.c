BGOpen("wf620",0);
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,1);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040406301_04_000");
MsgDisp("Nanatsumori","There's nothing I can take pictures of...
It's cold...Is there anything to gain
from coming here?");
MsgSel("Maybe the chilly ambience is better?","｛七ツ森＊｝ is here!","There's no need for that.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040406301_04_010");
    MsgDisp("Nanatsumori","Positive thinking, huh?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040406301_04_020");
    MsgDisp("Nanatsumori","Am I your windbreak?
Then, you can be my windbreak too!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChMotion(4,2,1);
    VoicePlay("B040406301_04_030");
    MsgDisp("Nanatsumori","I don't know what you meanー...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
