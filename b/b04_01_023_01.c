MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
VoicePlay("B040102301_01_000");
MsgDisp("Kazama","This place is a classic date staple.");
MsgSel("The atmosphere is beautiful","It's enjoyable in every season","Can't go wrong with this classic!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040102301_01_010");
    MsgDisp("Kazama","Since you seem to like it, should we come
here again?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040102301_01_020");
    MsgDisp("Kazama","Just what advertiser are you working for?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040102301_01_030");
    MsgDisp("Kazama","Yeah, I get it.
You're really into what's trendy.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
