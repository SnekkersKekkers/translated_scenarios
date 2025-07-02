BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040220002_02_000");
MsgDisp("Sassa","Shall we take on the advanced course?");
MsgSel("Yeah, let's go!","Let's stay on the beginner course a little longer...","Is there anything higher than that?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040220002_02_010");
    MsgDisp("Sassa","With that energy you'll be fine!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040220002_02_020");
    MsgDisp("Sassa","I see. If you don't push youself, there's
no meaning.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040220002_02_030");
        MsgDisp("Sassa","Hey, if you get too carried away,
you'll get injured.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040220002_02_040");
        MsgDisp("Sassa","Oh, seems like you're getting the hang of
it. There is.");
        MsgDisp("主人公","Really?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040220002_02_050");
        MsgDisp("Sassa","Yeah, it's an incredibly nice view.");
        MsgDisp("主人公","Heeh! I want to see it!");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040220002_02_060");
        MsgDisp("Sassa","Then, before that, 
we have to practice using the
advanced course first.");
        MsgDisp("主人公","Hehe, alright.");
        ChClose(2);
        SEPlay("EV_SE_536");
        SEWait();
        VoicePlay("B040220002_02_070");
        MsgDisp("Sassa","The lift is this way!");
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        ChOpen(2,253,0,0,0,-1,-1,0,0);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040220002_02_080");
        MsgDisp("Sassa","Yeah, you're getting better.
At this rate, we'll be able to do the
expert course together one day.");
        MsgDisp("主人公","Yay!
Make sure to take me along, okay?");
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040220002_02_090");
        MsgDisp("Sassa","Yeah, of course! It's a promise...
I'll take you to the highest point.");
        MsgDisp("主人公","｛颯砂＊＊｝...");
        MsgDisp("主人公","(I wonder, it sounds like he's not 
just talking about skiing?)");
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
