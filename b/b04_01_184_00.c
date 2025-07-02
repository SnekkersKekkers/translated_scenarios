BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(1,253,0,4,2,0,-1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so huh","Today's movie was a miss");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040118400_01_000");
    MsgDisp("Kazama","Wonderful huh...
If you liked it, then it's fine.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040118400_01_010");
    MsgDisp("Kazama","Right.
I heard the director is highly 
regarded around the world,
but it just wasn't to our taste.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040118400_01_020");
    MsgDisp("Kazama","Well, that's true, though.
Didn't you give up too early?
You were fast asleep even when
it was still the intro.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
