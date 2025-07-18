BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
ScrFadeIn(0);
VoicePlay("B040722101_07_000");
MsgDisp("Mikage","Habataki Castle is a typical flatland
castle...But that's enough for now, right?
Shall we go inside...?");
MsgSel("I want to look at the view a little longer","It's not clear if it's flat or a mountain","...Agh!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("B040722101_07_010");
    MsgDisp("Mikage","Got it. hey, just look at it until you're
satisfied.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040722101_07_020");
    MsgDisp("Mikage","It's a hill, a hill.
It's this high up, there's no way it's
flat.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(7,2);
    ChMouth(7,5);
    ChMotion(7,5);
    VoicePlay("B040722101_07_030");
    MsgDisp("Mikage","Haa...
...That can't be good～");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
