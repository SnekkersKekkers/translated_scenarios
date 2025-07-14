BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040610102_06_000");
MsgDisp("Himuro","Frankly speaking, I don't get the point of
coming here so many times.");
MsgSel("I'm sorry...","Because I like it!","You're a kid after all");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040610102_06_010");
    MsgDisp("Himuro","That doesn't mean you have to apologize, I
just wanted to hear your reasoning.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040610102_06_020");
    MsgDisp("Himuro","Hmm.... Maybe there's some merit to it I
don't get. If that's the case, there is
probably a point in tagging along.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,1);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040610102_06_030");
        MsgDisp("Himuro","It's the museum's problem if children
don't understand it.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040610102_06_040");
        MsgDisp("Himuro","...Could you not say that?");
        MsgDisp("主人公","Eh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040610102_06_050");
        MsgDisp("Himuro","Age isn't something you can compensate for
even if you try your best.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040610102_06_060");
        MsgDisp("Himuro","Even I don't like that I'm born after you
either.");
        MsgDisp("主人公","That's true...
sorry.");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,2);
        VoicePlay("B040610102_06_070");
        MsgDisp("Himuro","...No, I'm the one who should say sorry.
This is normally something I'm worried
about, so it just came out.");
        MsgDisp("主人公","Really?");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040610102_06_080");
        MsgDisp("Himuro","No matter how hard I try, we can't take
the same classes, not to mention it's
impossible for us to end up in the same
class.");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040610102_06_090");
        MsgDisp("Himuro","And... someday
you'll graduate before me.");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040610102_06_100");
        MsgDisp("Himuro","No matter what, I can't get over this wall
of one year.");
        MsgDisp("主人公","｛氷室＊＊｝......");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,4);
        VoicePlay("B040610102_06_110");
        MsgDisp("Himuro","Why do you look so lonely?
You're the one who's leaving me behind.");
        MsgDisp("主人公","Ehhh∋ It's not that I'm leaving you
behind...");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,0);
        VoicePlay("B040610102_06_120");
        MsgDisp("Himuro","Haha, you're flustered, huh.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040610102_06_130");
        MsgDisp("Himuro","Yeah.. at the very least, I have to make
you miss me.");
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
