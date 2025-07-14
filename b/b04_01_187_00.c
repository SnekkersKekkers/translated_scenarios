BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,2,2,8,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040118700_01_000");
    MsgDisp("Kazama","Well, the ability to enjoy anything is a
talent in itself.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040118700_01_010");
    MsgDisp("Kazama","Yeah, even evaluating
it is such a pain.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040118700_01_020");
    MsgDisp("Kazama","I'm glad we value the same things.
That's my oly relief.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
