BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ScrFadeIn(0);
ChMotion(6,0,1);
VoicePlay("B040615201_06_000");
MsgDisp("Himuro","Are you thirsty?
Shall we get something to drink?");
MsgSel("Let's go buy it together.","I want to concentrate ","Is it｛氷室＊＊｝'s treat?'");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040615201_06_010");
    MsgDisp("Himuro","Yeah, let's do that. 
We should probably take a break soon.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040615201_06_020");
    MsgDisp("Himuro","Hmm, isn't it important to take a 
break every once in a while?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040615201_06_030");
    MsgDisp("Himuro","Is that what you're worried about?
That's nonsense.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
