MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040223601_02_000");
MsgDisp("Sassa","I know why you say it's pretty but...");
MsgSel("Do you dislike the night parade?","It's truly beautiful!","Are you worried about energy conservation?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040223601_02_010");
    MsgDisp("Sassa","I don't mind it enough to dislike it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040223601_02_020");
    MsgDisp("Sassa","If your reaction is part of it, then yeah,
night parades are nice too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040223601_02_030");
    MsgDisp("Sassa","I wouldn't say something that dull.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
