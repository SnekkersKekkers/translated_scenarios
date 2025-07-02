BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,3,4,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040523101_05_000");
MsgDisp("Hiiragi","Do you prefer to ride
at the end or at the front??");
MsgSel("Hmm, which do you like, ｛柊＊＊＊｝?","I don't like either!","The end!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,2);
    ChMotion(5,4);
    VoicePlay("B040523101_05_010");
    MsgDisp("Hiiragi","It's difficult, isn't it? Hmm, front. I'll
go once again in the front to confirm.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,2);
    VoicePlay("B040523101_05_020");
    MsgDisp("Hiiragi","Middle then...?
There are hidden joys there too...
Rollercoasters are multi-faceted.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040523101_05_030");
    MsgDisp("Hiiragi","As expected,
All the veterans say the same thing.
Apparently, it's the rookies
who enjoy being at the front.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
