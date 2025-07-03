BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040605100_06_000");
MsgDisp("Himuro","Manmade light... huh.");
MsgSel("The starry sky was so romantic","｛氷室＊＊｝ fell asleep huh?","The seat was so soft, I was sound asleep...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040605100_06_010");
    MsgDisp("Himuro","Then it was worth coming here.
The most important thing is 
that you liked it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040605100_06_020");
    MsgDisp("Himuro","Ha?
Were you dreaming?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040605100_06_030");
    MsgDisp("Himuro","Haa... I can't believe this.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
