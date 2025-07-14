BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040110101_01_000");
MsgDisp("Kazama","Coming here makes me feel on edge.");
MsgSel("Habataki City history and the Kazama family are entwined, right?","This is about your ancestors here!","Over here, young master!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("B040110101_01_010");
    MsgDisp("Kazama","I'm sure some of it has been glorified as
time went on, but it is true my ancestors
served the lords and people as retainers.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040110101_01_020");
    MsgDisp("Kazama","This is an anecdote about them advising
the lord of Habataki Castle to reduce
taxes... Talk about the total opposite of
today's world.");
    ChEye(1,0);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040110101_01_030");
    MsgDisp("Kazama","Yeah, yeah.
But if I'm the young master, then who do
you think you are, ordering me around?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
