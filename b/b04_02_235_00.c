BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,2,2,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223500_02_000");
MsgDisp("Sassa","It's finally over huh...");
MsgSel("That was scary, but fun!","I think I'm paralyzed with fear...","The tricks were weak, no good no good!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040223500_02_010");
    MsgDisp("Sassa","I'm glad.
At least that's a relief.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040223500_02_020");
    MsgDisp("Sassa","I got weak in the legs many times...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040223500_02_030");
    MsgDisp("Sassa","I see. It's definitely best to put on a
brave front here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
