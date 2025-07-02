BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040305100_03_000");
MsgDisp("Honda","The myths surrounding constellations were
fun!!");
MsgSel("The starry sky was romantic.","｛本多＊＊｝, were you sleeping?","The seats were comfy - I slept soundly.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040305100_03_010");
    MsgDisp("Honda","Yup, looks like you had fun too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("B040305100_03_020");
    MsgDisp("Honda","Whaat, I wasn't sleeping! Who were you 
looking at?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    ChEyeOpenLevel(3,8);
    VoicePlay("B040305100_03_030");
    MsgDisp("Honda","Well, sleep is important. But... why now?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
