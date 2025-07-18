BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040508400_05_000");
MsgDisp("Hiiragi","Maybe it's because of the water
temperature...The time at which the
leaves turn red here are slightly off to
othe places.");
MsgSel("It's thanks to the spring water","Slightly off?","The fallen leaves floating on the water are beautiful");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040508400_05_010");
    MsgDisp("Hiiragi","That's right.
As the spring water's temperature is
stable.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040508400_05_020");
    MsgDisp("Hiiragi","It seems bad to say that it's \"off\" But
it's wonderful that you can enjoy it in a
manner that's unique to this place.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("B040508400_05_030");
    MsgDisp("Hiiragi","Yes, thanks to the transparency of the
spring water, the shadows of the leaves
are reflected on the bottom of the water.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
