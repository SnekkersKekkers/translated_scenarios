BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040515100_05_000");
MsgDisp("Hiiragi","If it's bowling, well, I know a thing or
two. If we're competing, there's no way I
can lose.");
MsgSel("I won't lose!","｛柊＊＊＊｝'s ball seems heavy'","A contest is a bit...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040515100_05_010");
    MsgDisp("Hiiragi","Yeah, good.
If it's not like that, it's not fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040515100_05_020");
    MsgDisp("Hiiragi","Right, that's the secret.
IF the ball is heavy,
the pins will fall over too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChMouth(5,2);
    ChMotion(5,1);
    VoicePlay("B040515100_05_030");
    MsgDisp("Hiiragi","Having a winner and a loser is inevitable.
It's unfortunate, but we cannot avoid it. ");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
