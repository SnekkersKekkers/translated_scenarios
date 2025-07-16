BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040320002_03_000");
MsgDisp("Honda","Habataki mountain is bright white...");
MsgSel("You can enjoy the scenery as well as skiing, huh?","Yeah, it's super pretty right?","Seems like this year's snow quality is most suitable for skiing?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040320002_03_010");
    MsgDisp("Honda","Is that so?
But the long boards get in the way, I
can't take my time looking around.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040320002_03_020");
        MsgDisp("Honda","I wonder?
I like how radiant it is, as it feels like
it's brimming with life.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040320002_03_030");
        MsgDisp("Honda","That's right.
The pure whiteness makes it feel like it
has a uniform beauty.");
        MsgDisp("主人公","｛本多＊＊｝?");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040320002_03_040");
        MsgDisp("Honda","If I'm able to carefully look around, I
think I'll be able to discover lots of new
things. It'll be difficult to do while
skiing.");
        MsgDisp("主人公","Then, today shall we do what
｛本多＊＊｝ wants to do?");
        ChSet(3,5);
        VoicePlay("B040320002_03_050");
        MsgDisp("Honda","Eh!");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,2);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040320002_03_060");
        MsgDisp("Honda","Phewー.
Thank you, you always put me first.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040320002_03_070");
        MsgDisp("Honda","But, today let's enjoy skiing!");
        MsgDisp("主人公","Is that okay?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040320002_03_080");
        MsgDisp("Honda","Yeah.
Look, in a world of pure white, you're
still gorgeous!");
        MsgDisp("主人公","Eh.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040320002_03_090");
        MsgDisp("Honda","And, from the day I met you, I wanted to
observe you.");
        MsgDisp("主人公","Ehh.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,5);
        VoicePlay("B040320002_03_100");
        MsgDisp("Honda","Hey, let's skii!
This is a waste of time!");
        MsgDisp("主人公","(Observe me he says... that's a little
embarrassing.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040320002_03_110");
    MsgDisp("Honda","Really?
I don't really know though.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
