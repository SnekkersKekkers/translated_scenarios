BGOpen("ne330",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040316002_03_000");
MsgDisp("Honda","Ah, those are those print stickers that
are really popular amongst girls right?");
MsgSel("Have you ever taken one?","This room is a private booth right?","Where do you stick them?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040316002_03_010");
    MsgDisp("Honda","Yup. My little sister used to have a
special album for these ages ago. We took
a lot of them together.");
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
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040316002_03_020");
        MsgDisp("Honda","Yeah, it's completely out of sight... hang
on, what are you planning to do?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0);
        ChCheek(3,3);
        VoicePlay("B040316002_03_030");
        MsgDisp("Honda","Yeah, it's completely out of sight... just
the two of us.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,5);
        ChCheek(3,8);
        VoicePlay("B040316002_03_040");
        MsgDisp("Honda","Hah... my heart's pounding again.");
        MsgDisp("主人公","Are you okay?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0);
        ChEyeOpenLevel(3,0);
        ChCheek(3,0);
        VoicePlay("B040316002_03_050");
        MsgDisp("Honda","Phew... yeah, I'm fine.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040316002_03_060");
        MsgDisp("Honda","Sometimes, when I'm with you, I get like
this.
It seems like it's from romantic feelings.");
        MsgDisp("主人公","Really!?");
        ChEye(3,4);
        ChMouth(3,3);
        ChMotion(3,0);
        VoicePlay("B040316002_03_070");
        MsgDisp("Honda","Are you that surprised?
Well, it's the truth.
There's no point hiding it.");
        MsgDisp("主人公","Um...");
        ChSet(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040316002_03_080");
        MsgDisp("Honda","Don't worry too much about it.
Let's just go to the private booth!");
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(3);
        MsgDisp("主人公","(Saying something like that... of course
that'll stay on my mind...)");
        MsgClose();
        ScrFadeOut(0);
        MsgClose();
        ChOpen(3,255,0,0,0,#1,#1,0,0,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040316002_03_090");
    MsgDisp("Honda","Right, somewhere that'll stand out...
The house name plate maybe?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
