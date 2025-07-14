BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040621200_06_000");
MsgDisp("Himuro","...That's a strong business spirit.");
MsgSel("It's supply and demand!","Is that no good?","Let's contribute to sales!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040621200_06_010");
    MsgDisp("Himuro","You have a point.
If there's no demand, why not make one?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040621200_06_020");
    MsgDisp("Himuro","It's not bad but a bit tedious.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040621200_06_030");
    MsgDisp("Himuro","Are you planning on squandering your
money?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
