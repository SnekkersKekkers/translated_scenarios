BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B040515102_05_000");
MsgDisp("Hiiragi","I'm quite familiar with bowling.");
MsgSel("Eh, surprising!","｛柊＊＊＊｝'s form is beautiful huh'","Then, I want you to teach me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("B040515102_05_010");
    MsgDisp("Hiiragi","Phew,
you're as honest as ever.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,4);
    ChMotion(5,0,1);
    VoicePlay("B040515102_05_020");
    MsgDisp("Hiiragi","Definitely start with the appearances
first. I suppose that's an affliction of
my occupation?");
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
        DateRateSet(0);
        ChEye(5,0);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040515102_05_030");
        MsgDisp("Hiiragi","Being \"familiar\" and \"skilled\" are
considerably different.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,2);
        ChEyeOpenLevel(5,8);
        VoicePlay("B040515102_05_040");
        MsgDisp("Hiiragi","I'm sorry to say, but I have very little
experience.");
        MsgDisp("主人公","Umm, I'm sorry.");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,0);
        ChEyeOpenLevel(5,#1);
        VoicePlay("B040515102_05_050");
        MsgDisp("Hiiragi","Phew, you don't need to apologize.
I phrased it weirdly.");
        ChMouth(5,4);
        ChMotion(5,2);
        VoicePlay("B040515102_05_060");
        MsgDisp("Hiiragi","But, I really am familiar with it. Back
when our theater group used to tour the
country, we stayed in places with bowling
alleys.");
        MsgDisp("主人公","I see, 
hotels have bowling facilities.");
        ChEye(5,4);
        VoicePlay("B040515102_05_070");
        MsgDisp("Hiiragi","Indeed, but I wasn't allowed to play.
Despite appearances, I've been a lead
actor since I was little.");
        MsgDisp("主人公","I see..");
        ChEye(5,0);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("B040515102_05_080");
        MsgDisp("Hiiragi","Hey.
Did you make that face intentionally?");
        MsgDisp("主人公","Hehe, I did.");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040515102_05_090");
        MsgDisp("Hiiragi","That's right, it's not a particularly sad
story.
I grew up being cared for by everyone.");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040515102_05_100");
        MsgDisp("Hiiragi","That being said, now I can go bowling any
time I'd like, with the person I like,
this may be the most wonderful time of my
life.");
        MsgDisp("主人公","(｛柊＊＊＊｝, you're exaggerating.)");
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
