BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,0,8,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040123100_01_000");
MsgDisp("Kazama","You had a good luck on your face didn't
you?");
MsgSel("That was awesome! I wanna ride again!","Uugh, that was scary...","I wanted a bit more thrill...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040123100_01_010");
    MsgDisp("Kazama","Got it.
I'm having fun just looking at
your facial expressions.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040123100_01_020");
    MsgDisp("Kazama","I see, you looked like you were
having quite a lot of fun though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040123100_01_030");
    MsgDisp("Kazama","I think that was quite enough.
What do you mean by more thrill anyways?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
