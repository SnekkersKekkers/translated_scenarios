BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
ChEye(4,3);
ChMouth(4,0);
ChMotion(4,5);
ChEyeOpenLevel(4,10);
VoicePlay("B040403101_04_000");
MsgDisp("Nanatsumori","A king penguin...chick∋
It's huge∈");
ChEyeOpenLevel(4,#1);
MsgSel("Waa, it's so fluffy!","Its so big...there could be a person in there","It's too big, it's scary");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040403101_04_010");
    MsgDisp("Nanatsumori","Well, it is fluffy but..
Look at the size of that chick!
Pay attention to that too∈");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040403101_04_020");
    MsgDisp("Nanatsumori","For sure...a human child could fit in
there. Damn! That's funny, I'll take a
picture.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040403101_04_030");
    MsgDisp("Nanatsumori","Your reasoning for it being scary is that
it's big?
I don't understandー...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
