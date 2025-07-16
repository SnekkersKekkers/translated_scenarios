SEPlay("EV_SE_517");
Wait(110,0);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,3,#1,#1,0,0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
SEStop("EV_SE_517",2);
VoicePlay("B040402400_04_000");
MsgDisp("Nanatsumori","This... is a hit, right?");
MsgSel("It's beautiful.","It's artistic.","This doesn't suit my tastes.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040402400_04_010");
    MsgDisp("Nanatsumori","Yeah.
That's honestly what I thought.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040402400_04_020");
    MsgDisp("Nanatsumori","I don't know about that.
I just know it's a pretty sound.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040402400_04_030");
    MsgDisp("Nanatsumori","Right.
Well, everyone has their own likes and
dislikes.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
