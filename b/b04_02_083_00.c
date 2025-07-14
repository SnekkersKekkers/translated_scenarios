BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040208300_02_000");
MsgDisp("Sassa","Since it's this hot, won't the fireflies
be defeated too?");
MsgSel("Will they be alright...?","I can't wait for nighttime","It's more refreshing here than elsewhere though?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040208300_02_010");
    MsgDisp("Sassa","That's right. They went to the trouble of
becoming adults, so I want them to spend
this time happily at least.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040208300_02_020");
    MsgDisp("Sassa","Somewhat, it's like you've become a
firefly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040208300_02_030");
    MsgDisp("Sassa","I see, so that's 
why this is their home.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
