BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040309002_03_000");
MsgDisp("Honda","Did you know about how if you
talk to plants, they'll grow quicker?");
MsgSel("If you talk to them gently, they'll grow up strong huh?","There's no way they understand words though?","It's good to make them listen to music to, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040309002_03_010");
    MsgDisp("Honda","Yep yep, it's interesting.
It's good if you stroke them too.
I'll try that next time.");
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
        DateRateSet(0);
        ChSet(3,2);
        VoicePlay("B040309002_03_020");
        MsgDisp("Honda","It's not the words, but
the feelings that'll be conveyed?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0,1);
        VoicePlay("B040309002_03_030");
        MsgDisp("Honda","But, you know, there's even a saying that
houseplants feed off people's complaints.");
        MsgDisp("主人公","It would be amazing
if that were true.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040309002_03_040");
        MsgDisp("Honda","Will the big tree become a sacred tree?
Will everyone's hopes help 
it grow into a giant tree?");
        MsgDisp("主人公","It's super interesting huh!");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040309002_03_050");
        MsgDisp("Honda","Yeppers, no matter how silly a story may
be, it's worth thinking about.");
        ChSet(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040309002_03_060");
        MsgDisp("Honda","I was able to enjoy a conversation like
this, you're the best!");
        MsgDisp("主人公","｛本多＊＊｝, your voice is loud.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040309002_03_070");
        MsgDisp("Honda","A loud voice will make you grow bigger.");
        MsgDisp("主人公","(｛本多＊＊｝, I'm not a bug.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040309002_03_080");
    MsgDisp("Honda","Right right, listening to classical music
makes it sweet.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
