BGOpen("bh510",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B040530000_05_000");
MsgDisp("Hiiragi","Please, there's nothing here, but please
make yourself feel at home.");
MsgSel("It's a wonderful room!","It's a boyish room","...It's a unique room, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("B040530000_05_010");
    MsgDisp("Hiiragi","Is that so?
I'm not here very often though.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040530000_05_020");
    MsgDisp("Hiiragi","My room has definitely been like this
since I was a child.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,0);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040530000_05_030");
    MsgDisp("Hiiragi","It reflects my personality huh...
which part?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
