BGOpen("tr510",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040824100_08_000");
MsgDisp("Shirahane","It's so spacious...
It would be nice to sprint around here to
our heart's content...");
MsgSel("It feels nice to be surrounded by Mother Nature!","....There's nothing here.","That cow keeps looking this way...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    VoicePlay("B040824100_08_010");
    MsgDisp("Shirahane","That's right.
It feels kinda nice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,2,1);
    VoicePlay("B040824100_08_020");
    MsgDisp("Shirahane","This is the world of the animals, after
all...should we also just sprint around
after all");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040824100_08_030");
    MsgDisp("Shirahane","Seriously!
Is it interested in us?
Heey, should we get closer?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
