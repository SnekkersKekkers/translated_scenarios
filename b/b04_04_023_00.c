MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,2,2,8,#1,0,0);
VoicePlay("B040402300_04_000");
MsgDisp("Nanatsumori","Apparently this is a popular date spot.");
MsgSel("It's because it's got a nice atmosphere, right?","There's nothing special about it though...","I wonder why it's popular amongst couples?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(4,2,1);
    VoicePlay("B040402300_04_010");
    MsgDisp("Nanatsumori","The atmosphere huh...
Well, it's definitely pretty.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040402300_04_020");
    MsgDisp("Nanatsumori","it's not a place to get excited and play.
Well, you can see some unusual objects
here. Let's relax and enjoy it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040402300_04_030");
    MsgDisp("Nanatsumori","...I see.
I've not thought of that before.
Let's think about why.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
