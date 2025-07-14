BGOpen("wf400",1);
ChLayout(1);
ChOpen(2,253,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
MsgSel("Today's event was great!","Today's event was okay.","Today's event was awful.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040204400_02_000");
    MsgDisp("Sassa","Yeah the music hit me right in gut.
Live music really is awesome!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040204400_02_010");
    MsgDisp("Sassa","It's better when you know more of the
songs.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040204400_02_020");
    MsgDisp("Sassa","Are you not good with loud noises?
You should have said so before.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
