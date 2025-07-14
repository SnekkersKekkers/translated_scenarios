BGOpen("ne330",0);
ChLayout(1);
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,2);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040416000_04_000");
MsgDisp("Nanatsumori","...So.
What shall we do?");
MsgSel("Let's take on the medal game!","How about we try the quiz game?","Shall we try getting our compatibility read?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040416000_04_010");
    MsgDisp("Nanatsumori","Medal, huh?
Got it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040416000_04_020");
    MsgDisp("Nanatsumori","I don't really like things with time
limits though...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040416000_04_030");
    MsgDisp("Nanatsumori","Okay. It'll be funny if the results are
ridiculous.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
