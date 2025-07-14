MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040623600_06_000");
MsgDisp("Himuro","What a peculiar world...");
MsgSel("That was worth seeing, huh!","A dream world...","There was a staggering number of lights.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("B040623600_06_010");
    MsgDisp("Himuro","Definitely. This is surrealism you won't
see in other theme parks. It's hard to
look away from it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040623600_06_020");
    MsgDisp("Himuro","Dreams are dreams, but isn't it more of a
nightmare?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("B040623600_06_030");
    MsgDisp("Himuro","Yeah. I was more interested in that than
the production. I wonder how much the
utility bill was.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
