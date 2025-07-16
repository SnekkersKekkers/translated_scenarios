BGOpen("fp200",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040308500_03_000");
MsgDisp("Honda","I wonder if there are any firefly larvae?");
MsgSel("It's cold, so don't put your hand in the water","Aren't they hibernating?","Do you want to try looking?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040308500_03_010");
    MsgDisp("Honda","Eh?
But if I don't put my hand into the water,
I can't catch them?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(0);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B040308500_03_020");
    MsgDisp("Honda","Right now they're trying very hard to
catch food in the water");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040308500_03_030");
    MsgDisp("Honda","Yep yep, that's right!
There's an abundance of spring water, so
the temperature is high.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
