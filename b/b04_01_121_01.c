MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040112101_01_000");
MsgDisp("Kazama","I always thought that the flea markets
here were very lively.");
MsgSel("Wow, they're even selling fresh veggies.","There's so many different things, you can never tire of it.","If ｛風真＊＊｝ opened a stall, it would be the talk of the city.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("B040112101_01_010");
    MsgDisp("Kazama","It's nice. Flea markets like this were
popular in England, too. People would sell
items straight out of the trunk of their
cars.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040112101_01_020");
    MsgDisp("Kazama","Right? People trying to get rid of junk,
people who are real salesmen...
There's all kinds here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040112101_01_030");
    MsgDisp("Kazama","You think so? Grandpa might find it an
interesting venture, But Dad... Might
think it's too much trouble.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
