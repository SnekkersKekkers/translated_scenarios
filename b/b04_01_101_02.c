BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040110102_01_000");
MsgDisp("Kazama","In the long history of Habataki City,
I wonder if our ancestors ever
met like we are now?");
MsgSel("Maybe they were hunter-gatherers?","Maybe they fought on the battlefield together?","Maybe they lived together in Habataki Castle?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChCheek(1,5);
    VoicePlay("B040110102_01_010");
    MsgDisp("Kazama","Oh, that's nice. We could fish everyday,
pick chestnuts, and eat them together.
That sounds like a lot of fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    ChCheek(1,0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040110102_01_020");
    MsgDisp("Kazama","Wait a sec.
Is this a scenario between two guys now?
Well, I guess that is just like you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(2);
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040110102_01_030");
        MsgDisp("Kazama","You aren't saying you're a princess,
right? You're like the cheerful town
peasant.");
        MsgDispSksp(1,0);
        MsgDateResultDisp();
        MsgDispSksp(0);
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0,1);
        VoicePlay("B040110102_01_040");
        MsgDisp("Kazama","That's right. Our ancestors were having
dumb conversations like this hundreds of
years ago too, right?");
        MsgDisp("主人公","Hehe, that's fun to think about.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040110102_01_050");
        MsgDisp("Kazama","Ooh, I bet your ancestor was one of those
strange ones, always causing trouble
for my ancestors, right?");
        MsgDisp("主人公","Huh?
Do I cause trouble for you?");
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,4);
        ChMouth(1,4);
        ChCheek(1,5);
        VoicePlay("B040110102_01_060");
        MsgDisp("Kazama","No, not in a bad way...
It's like, in a good way, you know.");
        MsgDisp("主人公","What kind of trouble, then?");
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        ChCheek(1,0);
        VoicePlay("B040110102_01_070");
        MsgDisp("Kazama","... I'm saying our ancestors
must have been just like this.");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040110102_01_080");
        MsgDisp("Kazama","Haah, I don't think I'll be
breaking this spiral, either...");
        MsgDisp("主人公","(Umm... What is that supposed to mean?)");
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
