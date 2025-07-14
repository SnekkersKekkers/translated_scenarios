BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040210102_02_000");
MsgDisp("Sassa","Hey, are you actually having fun here?");
MsgSel("Yeah, because I'm with ｛颯砂＊＊｝.","Of course, I'm having fun▼","Honestly I think this is a huge fail");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040210102_02_010");
    MsgDisp("Sassa","In that sense I feel the same...
but that's not what I meant.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040210102_02_020");
    MsgDisp("Sassa","Heehー,nice.
That's the best outcome.
Well, I completely don't get it though.");
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
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040210102_02_030");
        MsgDisp("Sassa","Seriously? You should have said a bit
sooner.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,3);
        ChMouth(2,3);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040210102_02_040");
        MsgDisp("Sassa","Hahaha.
To be honest, me too.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040210102_02_050");
        MsgDisp("Sassa","Then, why did we come
here so many times?");
        MsgDisp("主人公","Hehe, seriously.
I wonder why?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,0);
        VoicePlay("B040210102_02_060");
        MsgDisp("Sassa","It was you, 
I thought you liked it.");
        MsgDisp("主人公","I also thought ｛颯砂＊＊｝ liked it.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,4);
        VoicePlay("B040210102_02_070");
        MsgDisp("Sassa","We're funny aren't we?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040210102_02_080");
        MsgDisp("Sassa","Then, well, we came all this way, why
don't we take a look?");
        MsgDisp("主人公","Yeah, since we came all the way.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,2);
        VoicePlay("B040210102_02_090");
        MsgDisp("Sassa","Is this what it feels like to be with your
fated person?");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040210102_02_100");
        MsgDisp("Sassa","Come on, let's go see that weird mask
again.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(2);
        SEWait();
        MsgDisp("主人公","(I'm happy that we're on the same page...
but what did ｛颯砂＊＊｝ say?)");
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
