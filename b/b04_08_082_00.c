BGOpen("fp200",0);
ChLayout(1);
ChEye(8,4);
ChMouth(8,4);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040808200_08_000");
MsgDisp("Shirahane","Ha...it's strange?
Doesn't it feel kinda healing?");
MsgSel("Are you that tired?","It's because ｛大地＊＊｝ is that energetic","I feel soothed too");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("B040808200_08_010");
    MsgDisp("Shirahane","Haha!
It's not like that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,4,1);
    ChEyeOpenLevel(8,0);
    ChCheek(8,5);
    VoicePlay("B040808200_08_020");
    MsgDisp("Shirahane","Hehe!
Being energetic is my strong point!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040808200_08_030");
    MsgDisp("Shirahane","Is that so?
Let's just relax together for today.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
