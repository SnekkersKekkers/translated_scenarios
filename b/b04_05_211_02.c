BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040521102_05_000");
MsgDisp("Hiiragi","There are elderly married couples coming
here too.");
MsgSel("I wonder if it's a date... that's wonderful.","It's definitely a place of memories for them.","Maybe they used to work here a long time ago?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040521102_05_010");
    MsgDisp("Hiiragi","That's right.
I'd like to age like that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040521102_05_020");
    MsgDisp("Hiiragi","Maybe they used to go on dates here often?
Just like us.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040521102_05_030");
        MsgDisp("Hiiragi","You think they're former employees...
Can we go with something a little more
romantic?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChMotion(5,0);
        VoicePlay("B040521102_05_040");
        MsgDisp("Hiiragi","If they were former employees...");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040521102_05_050");
        MsgDisp("Hiiragi","Even after they retired, they wondered how
the animals they were looking after were,
And came to check how they were doing.");
        ChEye(5,3);
        ChMotion(5,0);
        VoicePlay("B040521102_05_060");
        MsgDisp("Hiiragi","How's that for a reasoning?
I was impolite, wasn't I?");
        MsgDisp("主人公","Ehh?");
        ChEye(5,4);
        VoicePlay("B040521102_05_070");
        MsgDisp("Hiiragi","when I was little, I used to play like
this by myself.");
        ChMotion(5,4);
        VoicePlay("B040521102_05_080");
        MsgDisp("Hiiragi","I couldn't really play with friends my
age.");
        MsgDisp("主人公","｛柊＊＊＊｝...");
        ChEye(5,2);
        VoicePlay("B040521102_05_090");
        MsgDisp("Hiiragi","It's not a sad story.
I was just imagining things for fun.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040521102_05_100");
        MsgDisp("Hiiragi","If the me back then saw us now, I wonder
what he would imagine?");
        MsgDisp("主人公","Yeah, I wonder?");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040521102_05_110");
        MsgDisp("Hiiragi","...How would it go, right?");
        MsgDisp("主人公","(｛柊＊＊＊｝, just now you were imagining
something and laughing...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
