BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040415101_04_000");
MsgDisp("Nanatsumori","...It's surprisingly tiring.");
MsgSel("This'll be good exercise.","Shall we take a little break?","I want to see ｛七ツ森＊｝'s good points♪");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("B040415101_04_010");
    MsgDisp("Nanatsumori","It's not like we came to exercise.
I'm going to take a bit of a break.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,4);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040415101_04_020");
    MsgDisp("Nanatsumori","Yeah.
Even playing needs a break.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040415101_04_030");
    MsgDisp("Nanatsumori","Hey. So you're saying there hasn't been
any good things about me until now?
Alright just you watch...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
