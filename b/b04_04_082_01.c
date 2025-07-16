BGOpen("fp200",0);
ChLayout(1);
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040408201_04_000");
MsgDisp("Nanatsumori","The pond's surface is sparkling.
It's pretty.");
MsgSel("It's the season of bugs","Those are frog spawn!","Should I take a picture?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,2,1);
    VoicePlay("B040408201_04_010");
    MsgDisp("Nanatsumori","Ugh... the feeling is ruined.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(0);
    ChEye(4,5);
    ChMouth(4,5);
    ChMotion(4,5,1);
    VoicePlay("B040408201_04_020");
    MsgDisp("Nanatsumori","Bwah...
Don't go near that!
Actually, don't bring it to me∋");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040408201_04_030");
    MsgDisp("Nanatsumori","Oh, nice.
I'll take one too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
