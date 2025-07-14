BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,3,1);
VoicePlay("B040822100_08_000");
MsgDisp("Shirahane","Woahー!
It really is a great view!");
MsgSel("It would be nice if we were up even higher though...","It's a good thing it's nice weather, isn't it?","The ground is so far away...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,0,1);
    VoicePlay("B040822100_08_010");
    MsgDisp("Shirahane","...What do you mean by 
\"even higher\"?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B040822100_08_020");
    MsgDisp("Shirahane","For sure.
It's because both of us have been on our
best behaviour▼");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040822100_08_030");
    MsgDisp("Shirahane","Hey, it's only this high.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
