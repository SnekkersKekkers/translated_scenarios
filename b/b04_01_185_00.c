BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,0,3,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040118500_01_000");
    MsgDisp("Kazama","Yeah, but even so, didn't it kinda hit close
to home for us?!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(1,1);
    ChMouth(1,1);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040118500_01_010");
    MsgDisp("Kazama","So-so means it was neither good nor bad,
right?
What a waste of time.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    VoicePlay("B040118500_01_020");
    MsgDisp("Kazama","A difference of opinion, huh.
Well, if you're gonna be that decisive about
it, I won't argue.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
