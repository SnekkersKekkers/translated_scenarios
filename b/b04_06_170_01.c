BGOpen("ne340",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040617001_06_000");
MsgDisp("Himuro","Keep singing.");
MsgSel("｛氷室＊＊｝, you sing too!","Yeah, leave it to me!","I put in \"Pure Love Ballad\"!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040617001_06_010");
    MsgDisp("Himuro","No.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040617001_06_020");
    MsgDisp("Himuro","Yeah, I'll leave it to you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040617001_06_030");
    MsgDisp("Himuro","You want me to sing?
Are you stupid?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
