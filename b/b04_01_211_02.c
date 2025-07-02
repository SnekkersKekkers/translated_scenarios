BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040121102_01_000");
MsgDisp("Kazama","When I come here, I don't know
if I'm looking at the animals,
or if the animals are looking at me?");
MsgSel("I wonder how we look like to the animals","They're looking at us as if we're strange, huh","Maybe they think we look delicious?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,4);
    ChCheek(1,5);
    VoicePlay("B040121102_01_010");
    MsgDisp("Kazama","Don't we just look like 
a pair of humans to them?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    ChCheek(1,0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040121102_01_020");
    MsgDisp("Kazama","They're looking at you strangely,
not me.");
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
        DateRateSet(1);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040121102_01_030");
        MsgDisp("Kazama","You would be the biggest target...
Don't get too close.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040121102_01_040");
        MsgDisp("Kazama","You would definitely be targeted.
You wouldn't survive in the Savannah.");
        MsgDisp("主人公","Eh, why?");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040121102_01_050");
        MsgDisp("Kazama","You'd be easy to catch, so they'd target
you. A spacey person like you is the
perfect target.");
        MsgDisp("主人公","Hey, that's not true.
I'll live strongly in the Savannah.");
        ChEye(1,3);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040121102_01_060");
        MsgDisp("Kazama","I see, that's right.
You might even be better at
surviving than me.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040121102_01_070");
        MsgDisp("Kazama","Because even your natural born
enemies would grow to like you.");
        MsgDisp("主人公","Ehh?");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040121102_01_080");
        MsgDisp("Kazama","After all, everyone naturally gathers
around you, besides, is there anyone who
doesn't like you?");
        MsgDisp("主人公","Umm... 
a person who doesn't like me...");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0,1);
        VoicePlay("B040121102_01_090");
        MsgDisp("Kazama","Well, there's no one right?");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040121102_01_100");
        MsgDisp("Kazama","That might be a problem in itself...");
        MsgDisp("主人公","(｛風真＊＊｝
is there something troubling you?)");
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
