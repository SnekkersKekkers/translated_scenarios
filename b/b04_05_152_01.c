BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040515201_05_000");
MsgDisp("Hiiragi","Yeah, you've got a relaxed form.");
MsgSel("Relax, and play♪","It's thanks to｛柊＊＊＊｝'s lesson'","Maybe I've already surpassed my teacher?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040515201_05_010");
    MsgDisp("Hiiragi","Heheh, yes that's good rhythm.
More than anything, 
it's most important to have fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040515201_05_020");
    MsgDisp("Hiiragi","You are most welcome. I think you're
probably better than me now.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,0);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040515201_05_030");
    MsgDisp("Hiiragi","Such impoliteness will face expulsion.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
