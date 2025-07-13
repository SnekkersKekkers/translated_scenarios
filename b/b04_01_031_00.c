BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040103100_01_000");
MsgDisp("Kazama","This is such a cool and calm place,
I don't mind it here.");
MsgSel("What's the name of that fish?","The patterns on those fish are beautiful▼","Wow∋ I feel their stares from behind the rocks...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040103100_01_010");
    MsgDisp("Kazama","What, can't you read?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040103100_01_020");
    MsgDisp("Kazama","Some of them are so flamboyant. It's
funny.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040103100_01_030");
    MsgDisp("Kazama","Better watch out! It says, 'Tiger Sharks
are not picky eaters. They'll prey on
anything.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
