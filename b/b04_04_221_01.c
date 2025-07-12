BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040422101_04_000");
MsgDisp("Nanatsumori","The air is clear today...
The mountains are super close.
I should take a picture.");
MsgSel("How about taking a picture of the sky?","How about taking a picture of the townscape?","The clouds hanging there are nice!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    VoicePlay("B040422101_04_010");
    MsgDisp("Nanatsumori","For now I'm taking a picture 
of the mountains.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(0);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040422101_04_020");
    MsgDisp("Nanatsumori","Were you listening to anything I say?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,10);
    VoicePlay("B040422101_04_030");
    MsgDisp("Nanatsumori","Where?
I need to take a good picture of
the mountains and the sky!");
    ChEyeOpenLevel(4,#1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
}
   