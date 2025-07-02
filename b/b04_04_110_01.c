BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
ChEye(4,2);
ChMouth(4,4);
ChCheek(4,5);
VoicePlay("B040411001_04_000");
MsgDisp("Nanatsumori","...What.
Could you not stare at me so much?");
MsgSel("I was just thinking you had a nice body.","I was just wondering if you could swim.","It's nothing▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040411001_04_010");
    MsgDisp("Nanatsumori","Pervert.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,0);
    ChMouth(4,1);
    ChMotion(4,1,1);
    ChCheek(4,0);
    VoicePlay("B040411001_04_020");
    MsgDisp("Nanatsumori","I can swim, more or less.
Stop staring at my body.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    ChCheek(4,8);
    VoicePlay("B040411001_04_030");
    MsgDisp("Nanatsumori","Ugh...
When you act like that in a swimsuit,
it makes me a bit anxious.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
