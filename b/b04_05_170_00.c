BGOpen("ne340",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040517000_05_000");
MsgDisp("Hiiragi","It seems you're up next.
Please go ahead.");
MsgSel("I want to hear ｛柊＊＊＊｝'s beautiful voice'","Let's do a duet together","Please listen to my song");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    VoicePlay("B040517000_05_010");
    MsgDisp("Hiiragi","Thank you.
But before that, you're up first.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMotion(5,4);
    VoicePlay("B040517000_05_020");
    MsgDisp("Hiiragi","That won't do.
If we sing together, I won't be able to
enjoy your voice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040517000_05_030");
    MsgDisp("Hiiragi","Yes,
I'll leave the interlude to you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
