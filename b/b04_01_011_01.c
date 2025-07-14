BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040101101_01_000");
MsgDisp("Kazama","You can really see everything, all the way
from Habataki Mountain to the sea.");
MsgSel("The city seems so small from here","Something feels weird about my ears?","I just saw something shining on Mount Habataki!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040101101_01_010");
    MsgDisp("Kazama","Right. Can't you see everyone living their
frantic, busy everyday lives?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040101101_01_020");
    MsgDisp("Kazama","That's because of the speed of the
elevator. Have you tried pinching your
nose and pulling your ears?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040101101_01_030");
    MsgDisp("Kazama","Only you would be able to point something
like that out.
You're a funny person, you know?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
