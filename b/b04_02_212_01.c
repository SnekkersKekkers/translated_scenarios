BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040221201_02_000");
MsgDisp("Sassa","What's this?
Headbands with animal ears?");
MsgSel("A horse would suit ｛颯砂＊＊｝.","Should I try on the bunny ears?","I think the cat ears would suit ｛颯砂＊＊｝.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040221201_02_010");
    MsgDisp("Sassa","Well, out of these.
The others are a bit...you know.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040221201_02_020");
    MsgDisp("Sassa","Yes, please.
L-Like a bunny girl?");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    ChEyeOpenLevel(2,8);
    VoicePlay("B040221201_02_030");
    MsgDisp("Sassa","There's no way that's cute.
Ah, you just want to laugh huh?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
