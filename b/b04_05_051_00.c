BGOpen("wf510",0);
BGMStop();
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B040505100_05_000");
MsgDisp("Hiiragi","So this is the planetarium...");
MsgSel("The whole sky being filled with stars is romantic huh?","｛柊＊＊＊｝, were you sleeping?","The seats were so soft I was sound asleep...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040505100_05_010");
    MsgDisp("Hiiragi","Yes, very much so.
Shall we go see it again?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040505100_05_020");
    MsgDisp("Hiiragi","No. But you jolted awake a few times
didn't you?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040505100_05_030");
    MsgDisp("Hiiragi","It did feel that way.
I was also drawn in.
It is regrettable.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
