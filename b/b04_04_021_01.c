BGOpen("wf210",0);
ChSet(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040402101_04_000");
MsgDisp("Nanatsumori","Ah, a seagull.
...Or maybe it's a black-tailed gull?");
MsgSel("Which is it I wonder?","It's not a black-tailed gull?","Isn't this a good chance to take a picture?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChSet(4,0);
    VoicePlay("B040402101_04_010");
    MsgDisp("Nanatsumori","Right?
They look so alike after all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("B040402101_04_020");
    MsgDisp("Nanatsumori","Hmmm? Then, explain your reasoning in 20
characters or less.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("B040402101_04_030");
    MsgDisp("Nanatsumori","Ahh, I see. If I can take it up this
close, I might be able to get a nice
picture of its wings and eyes.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
