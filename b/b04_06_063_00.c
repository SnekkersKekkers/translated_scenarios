BGOpen("wf620",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606300_06_000");
MsgDisp("Himuro","There's no one here...
Only the sounds of the waves can be heard.");
MsgSel("We have the winter sea to ourselves!","The winter sea is so miserable...","There are lots of delicious things in the winter sea♪");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040606300_06_010");
    MsgDisp("Himuro","How positive.
It's amazing you can think like that.
I need to learn from your example.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040606300_06_020");
    MsgDisp("Himuro","Really?
You're coming to that conclusion on your
own because there's no signs of 
life and it's cold right?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040606300_06_030");
    MsgDisp("Himuro","That's an idea I've never thought of.
That's new.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
