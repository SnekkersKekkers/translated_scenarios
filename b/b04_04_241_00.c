BGOpen("tr510",0);
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040424100_04_000");
MsgDisp("Nanatsumori","It's so big...
But, it's still just spacious.");
MsgSel("It feels nice to be surrounded by Mother Nature!","...There's nothing here.","Thatcow keeps looking this way....");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,0);
    VoicePlay("B040424100_04_010");
    MsgDisp("Nanatsumori","I smell something..");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040424100_04_020");
    MsgDisp("Nanatsumori","I can feel a lot of eyes on me.
For now, let's eat the freshly 
squeezed soft serve ice cream
made by these cows.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,10);
    VoicePlay("B040424100_04_030");
    MsgDisp("Nanatsumori","They're staring...
their eyes are surprisingly cute, right?");
    ChEyeOpenLevel(4,-1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
