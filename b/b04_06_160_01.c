BGOpen("ne330",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040616001_06_000");
MsgDisp("Himuro","Shall I get that 
plushie for you?");
MsgSel("I would be so happy...!","CAN you?","Do your best!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("B040616001_06_010");
    MsgDisp("Himuro","Then, look forward to it.
It'll be present for you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040616001_06_020");
    MsgDisp("Himuro","Are you making fun of me?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("B040616001_06_030");
    MsgDisp("Himuro","Do you really want it that much?
Then, I'll just have to get serious right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
