BGOpen("wf400",1);
ChLayout(1);
ChOpen(1,253,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay.","Today's event was awful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040104100_01_000");
    MsgDisp("Kazama","Right? Both of them were giving it their
all, so it was really exciting to watch
them.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    VoicePlay("B040104100_01_010");
    MsgDisp("Kazama","It must be pretty hard to build up your
body to that extent.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,1);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040104100_01_020");
    MsgDisp("Kazama","It's not that the event sucked, but more
about your own tastes, right?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
