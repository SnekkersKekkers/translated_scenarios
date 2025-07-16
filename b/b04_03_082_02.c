BGOpen("fp200",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040308202_03_000");
MsgDisp("Honda","Let's walk around the pond.
Maybe we'll discover something new?");
MsgSel("Hehe, we're like an expedition team huh?","Will we be able to discover something new?","It'll be good exercise huh");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040308202_03_010");
    MsgDisp("Honda","Yep yep, we can't overlook even small
changes. Then, let's start our two-person
exploration!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040308202_03_020");
        MsgDisp("Honda","Even ordinary things you've become
accustomed to seeing, will become great
discoveries if you change your viewpoint.
Huh? That's your specialty.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040308202_03_030");
        MsgDisp("Honda","When I'm with you, I'm always discovering
new things.");
        MsgDisp("主人公","You're exaggerating there.");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,0);
        VoicePlay("B040308202_03_040");
        MsgDisp("Honda","That's really how I feel though.");
        MsgDisp("主人公","?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,2);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040308202_03_050");
        MsgDisp("Honda","That's also what it was like with my
sister when she was younger...");
        MsgDisp("主人公","Your sister?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040308202_03_060");
        MsgDisp("Honda","Right right, she started asking all sorts
of questions when I taught her, and it
started to instill some doubt within me.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040308202_03_070");
        MsgDisp("Honda","But, lately nothing clicks anymore.
Even though she used to love talking about
bugs, it's weird huh?");
        MsgDisp("主人公","Hehe, I think I understand your sister's
feelings.");
        ChSet(3,5);
        VoicePlay("B040308202_03_080");
        MsgDisp("Honda","Ehh!
Could it be that it doesn't click for you
too?");
        MsgDisp("主人公","No, ｛本多＊＊｝'s conversations
are super interesting.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMouth(3,3);
        VoicePlay("B040308202_03_090");
        MsgDisp("Honda","I'm glad.
Then, let's go another round!");
        MsgDisp("主人公","(Hehe, must've been tough on his sister,
huh?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,4);
    ChEye(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040308202_03_100");
    MsgDisp("Honda","Exercise...
Yep yep, that might be good too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
