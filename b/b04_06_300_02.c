BGOpen("bh610",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
VoicePlay("B040630002_06_000");
MsgDisp("Himuro","Is there something you want to do?");
MsgSel("I want to look at your albums","Let's study?","let's get closer▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040630002_06_010");
    MsgDisp("Himuro","What are you going to do by looking at it?
...Well, it's fine.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040630002_06_020");
    MsgDisp("Himuro","Ehhh, you sure are diligent.
Could you teach me too?
Senpai.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,1);
        ChMouth(6,1);
        ChMotion(6,0);
        VoicePlay("B040630002_06_030");
        MsgDisp("Himuro","...Ha?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,10);
        VoicePlay("B040630002_06_040");
        MsgDisp("Himuro","...Okay.");
        MsgDisp("主人公","Eh∋");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040630002_06_050");
        MsgDisp("Himuro","Let's do the things you want.
Come on.");
        MsgDisp("主人公","Umm, I'm really sorry.
Just now was——");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,0);
        VoicePlay("B040630002_06_060");
        MsgDisp("Himuro","Just a joke?");
        MsgDisp("主人公","Y-Yeah");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040630002_06_070");
        MsgDisp("Himuro","..Haa, really what nonsense.");
        ChEye(6,1);
        ChMouth(6,1);
        ChMotion(6,1);
        VoicePlay("B040630002_06_080");
        MsgDisp("Himuro","You were greatly mistaken to think that
nothing would happen just because you're
going to your junior's house.");
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040630002_06_090");
        MsgDisp("Himuro","I'm...a man too.");
        MsgDisp("主人公","Yeah, that's right.
Thanks.");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,5);
        ChCheek(6,0);
        VoicePlay("B040630002_06_100");
        MsgDisp("Himuro","...Why are you thanking me?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040630002_06_110");
        MsgDisp("Himuro","Seriously, you throw me for a loop so
easily.");
        MsgDisp("主人公","(...?
｛氷室＊＊｝ seems happy for some reason?)");
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
