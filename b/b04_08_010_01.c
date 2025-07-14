BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(8,1);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040801001_08_000");
MsgDisp("Shirahane","Hey, hey, hows 'bout this?
Dont'cha feel like it would suit you?");
MsgSel("Really, I'll go buy it!","I wonder about that...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,1);
    ChMotion(8,1,1);
    VoicePlay("B040801001_08_010");
    MsgDisp("Shirahane","Wait a sec!
I'm just kiddin' so ya don't actually need
ta buy it.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040801001_08_020");
    MsgDisp("Shirahane","Sorry! I was messin' with ya to see your
reaction!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(8,4);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040801001_08_030");
    MsgDisp("Shirahane","Right!
If it suited ya, I'd troubled.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
