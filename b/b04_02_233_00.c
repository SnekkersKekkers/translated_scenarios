BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,5,0,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223300_02_000");
MsgDisp("Sassa","The moment I jumped!
For a moment, time stopped huh?");
MsgSel("I could get used to that thrill!","Hey, that's enough...","That was a very interesting experience...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040223300_02_010");
    MsgDisp("Sassa","Me too.
You can't get this feeling elsewhere!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040223300_02_020");
    MsgDisp("Sassa","Is that so...
Next time just watch from below.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040223300_02_030");
    MsgDisp("Sassa","Yeah, this was born as a ritual,
and changed into an attraction.
It's super interesting.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
