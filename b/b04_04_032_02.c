BGOpen("wf320",0);
ChLayout(1);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040403202_04_000");
MsgDisp("Nanatsumori","Eh.
Depending on the day, they'll sometimes
hold events here.");
MsgSel("It's unfortunate there's no event today.","I hate when it's crowded","They sure are good at attracting customers");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040403202_04_010");
    MsgDisp("Nanatsumori","I feel the same.
It's important to do your research
beforehand.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040403202_04_020");
        MsgDisp("Nanatsumori","There's no point in hosting an event if
it's not packed with people.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,3);
        ChMouth(4,4);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040403202_04_030");
        MsgDisp("Nanatsumori","Well, if this relaxing garden were to
become crowded then...");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040403202_04_040");
        MsgDisp("Nanatsumori","Bustling crowds are fun, but, this place
really does suit a relaxed atmosphere in
the end.");
        MsgDisp("主人公","If this garden was filled with people, I
would only be able to see the flying
penguins!");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040403202_04_050");
        MsgDisp("Nanatsumori","Right.
If I was only looking up, my neck would
start to hurtー.");
        MsgDisp("主人公","Hehe, ahaha!");
        ChEye(4,3);
        ChMouth(4,4);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,10);
        ChCheek(4,8);
        VoicePlay("B040403202_04_060");
        MsgDisp("Nanatsumori","...Ah.");
        MsgDisp("主人公","What's wrong?");
        ChEye(4,3);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040403202_04_070");
        MsgDisp("Nanatsumori","No... it's just.
That was kinda dangerous.
Just now.");
        MsgDisp("主人公","Eh?
Why?");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,0,1);
        ChCheek(4,10);
        VoicePlay("B040403202_04_080");
        MsgDisp("Nanatsumori","People look like they're sparkling when
they're laughing from their heart.");
        ChEye(4,4);
        ChMouth(4,4);
        ChCheek(4,10);
        VoicePlay("B040403202_04_090");
        MsgDisp("Nanatsumori","Just now, you were sparkling a lot.
So much so that I wanted to hug you.");
        MsgDisp("主人公","｛七ツ森＊｝......");
        VoiceEVSPlay(4);
        VoicePlay("B040403202_04_100");
        MsgDisp("Nanatsumori","｛主人公｝......");
        MsgDisp("主人公","Didn't it look like it was sparkling
because of the reflection of the penguins
in the water tank?");
        ChEye(4,5);
        ChMouth(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040403202_04_110");
        MsgDisp("Nanatsumori","∋");
        ChEye(4,3);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040403202_04_120");
        MsgDisp("Nanatsumori","Pfft... ahaha!
You really are the best.");
        MsgDisp("主人公","(Ah... Just now, didn't
｛七ツ森＊｝'s face look
like he was sparkling lots right now?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040403202_04_130");
    MsgDisp("Nanatsumori","Well, it's important to make sure they get
talked about.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
