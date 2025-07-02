BGOpen("fp200",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040108500_01_000");
MsgDisp("Kazama","I've heard the winter morning mist here is
mysterious?");
MsgSel("But you can't enter the park in the early morning","Watch your step, it could be dangerous","That's so mysterious, maybe something does live here?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108500_01_010");
    MsgDisp("Kazama","It's refreshing to hear some just
reasoning come from your mouth.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040108500_01_020");
    MsgDisp("Kazama","Yeah, it is.
Even now.");
    ChMouth(1,0);
    ChEyeOpenLevel(1,-1);
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,2);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040108500_01_030");
    MsgDisp("Kazama","Ohh, that could be... Maybe they're hiding
something by saying it's just the home of
the fireflies.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
