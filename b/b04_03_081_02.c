BGOpen("fp210",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040308102_03_000");
MsgDisp("Honda","Even the grafted cherry blossoms, are
blooming splendidly.");
MsgSel("They have an amazing life force huh?","Grafted tress you say?","I want to have a more peaceful cherry blossom viewing?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040308102_03_010");
    MsgDisp("Honda","That's right, it's delicate but strong!
That's the charm of Sakura.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040308102_03_020");
    MsgDisp("Honda","Yep yep, grafting is when you take a plant
with roots, then attach a part of a
separate plant to it. It's a type of
cloning technology!");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChSet(3,4,1);
        VoicePlay("B040308102_03_030");
        MsgDisp("Honda","Is that so?
This sort of chaotic atmosphere is fun
too.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,2);
        ChMotion(3,2);
        VoicePlay("B040308102_03_040");
        MsgDisp("Honda","The period of time in which we can do this
is limited.");
        MsgDisp("主人公","Eh?");
        ChEye(3,2);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040308102_03_050");
        MsgDisp("Honda","Have you thought about how there's a
likelihood this is our last cherry blossom
viewing of high school?");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040308102_03_060");
        MsgDisp("Honda","Was I able to say something that'll remain
in your memory?");
        MsgDisp("主人公","Yeah, of course.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,0);
        VoicePlay("B040308102_03_070");
        MsgDisp("Honda","When I'm with you, I start to question the
things I thought were natural or obvious,
it's super exciting.");
        ChEye(3,0);
        ChMouth(3,0);
        VoicePlay("B040308102_03_080");
        MsgDisp("Honda","So that's why, if I could give you
something back I would be happy.");
        MsgDisp("主人公","You've taught me so many things, not just
here, but all the places we go to
together.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,2);
        VoicePlay("B040308102_03_090");
        MsgDisp("Honda","...I've realized now.");
        MsgDisp("主人公","Eh?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        ChCheek(3,5);
        VoicePlay("B040308102_03_100");
        MsgDisp("Honda","It's not that I like teaching people, it
seems like I like teaching you.");
        ChCheek(3,0);
        MsgDisp("主人公","That's not true.
You seem to enjoy teaching other people,
｛本多＊＊｝.");
        ChEye(3,5);
        ChMouth(3,0);
        ChMotion(3,2);
        VoicePlay("B040308102_03_110");
        MsgDisp("Honda","Huh? Umm...I wonder if that's a positive
affirmation or not...");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,5);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040308102_03_120");
        MsgDisp("Honda","Haha!
You really are interesting!");
        MsgDisp("主人公","(I was told by ｛本多＊＊｝ that I'm
interesting, I'm happy, but maybe I have
mixed feelings about it?)");
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
