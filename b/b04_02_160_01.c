BGOpen("ne330",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040216001_02_000");
MsgDisp("Sassa","Heeー, a dance game?");
MsgSel("It's a game with a sports-like feel","Looks like we can have a dance battle","｛颯砂＊＊｝ can go first");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040216001_02_010");
    MsgDisp("Sassa","Yeah, I might be able
to aim for a high score.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040216001_02_020");
    MsgDisp("Sassa","Dance battle?
But I would rather dance with you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040216001_02_030");
    MsgDisp("Sassa","Even if I mess up, don't laugh okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
