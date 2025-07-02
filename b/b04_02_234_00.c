BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,4,2,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223400_02_000");
MsgDisp("Sassa","This should count as a thrill ride, right?");
MsgSel("I'm getting excited like a kid!","I could feel the centrifrugal force","The world... is spinning...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("B040223400_02_010");
    MsgDisp("Sassa","Even so, I spun too much...
I somewhat... feel gross...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040223400_02_020");
    MsgDisp("Sassa","Yeah.
That's pretty much all this ride is huh?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,4);
    ChMouth(2,4);
    ChMotion(2,2);
    VoicePlay("B040223400_02_030");
    MsgDisp("Sassa","Hahaha... me too.
F-first, let's sit down for a bit.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
