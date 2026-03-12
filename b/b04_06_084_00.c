BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040608400_06_000");
MsgDisp("Himuro","Reading, appetite, exercise...
There are all kinds of autumn.
Which one is yours?");
MsgSel("Reading!","Appetite!","｛Himuro＊＊｝'s autumn.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040608400_06_010");
    MsgDisp("Himuro","Ehhh, that's surprising, you're a literature
girl? Well, it's important to experience
printed text.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,5);
    VoicePlay("B040608400_06_020");
    MsgDisp("Himuro","Pfft...
You said that so assertively.
It made me laugh a bit.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040608400_06_030");
    MsgDisp("Himuro","Ha?
I don't get what you mean.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
