BGOpen("fp430",0);
BGMPlay("BGM_PLACE_MUSEUM_MIHARA",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B040510300_05_000");
MsgDisp("Hiiragi","I want to be able to interpret something
of our great senior's work.");
MsgSel("He's the pride of Haba Students!","It seems like it'll be difficult for me","It looks a little like ｛柊＊＊＊｝.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040510300_05_010");
    MsgDisp("Hiiragi","Yes. Even if it's just a little, I would
like to get to know it more.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,4);
    VoicePlay("B040510300_05_020");
    MsgDisp("Hiiragi","Do not fret, I am the same.
As long as you can currently feel
something from it, that's enough.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040510300_05_030");
    MsgDisp("Hiiragi","I'm happy but...
Where about?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
