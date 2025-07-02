BGOpen("ne340",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2,1);
ScrFadeIn(0);
VoicePlay("B040217001_02_000");
MsgDisp("Sassa","I'm not sure what to sing...");
MsgSel("Any popular song","An anime song!","Haba's school song?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040217001_02_010");
    MsgDisp("Sassa","Any you say, 
I'm not as knowledgable as you are.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("B040217001_02_020");
    MsgDisp("Sassa","Old time anime songs are fire!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040217001_02_030");
    MsgDisp("Sassa","Sounds good.
Then, let's a cappella together.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
