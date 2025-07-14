BGOpen("tr520",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
ScrFadeIn(0);
VoicePlay("B040224200_02_000");
MsgDisp("Sassa","Well then, hmm, where should we put our
tent?");
MsgSel("｛颯砂＊＊｝, I'm counting on you♪","When there's camping, there's BBQs!","It seems to be a lot of inconvenience and trouble...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("B040224200_02_010");
    MsgDisp("Sassa","Leave it to me!
Well first, let's start with putting up
the sun tarp...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040224200_02_020");
    MsgDisp("Sassa","That's fine, but there's an order to it
right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040224200_02_030");
    MsgDisp("Sassa","Right. You really start to appreciate the
conveniences of everyday life. That's
camping.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
