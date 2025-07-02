BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040622102_06_000");
MsgDisp("Himuro","Did you discover anything new?");
MsgSel("Hmmm, I don't think there was anything new...","｛氷室＊＊｝, you were always looking at the sea","I'll find something next time.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040622102_06_010");
    MsgDisp("Himuro","I guess you've seen everything there is to
see.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040622102_06_020");
    MsgDisp("Himuro","Hmm, I wasn't aware of that.
But that could definitely be true. ");
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
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040622102_06_030");
        MsgDisp("Himuro","How easygoing.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040622102_06_040");
        MsgDisp("Himuro","Next time, you say. So do you plan 
on coming here with me again? ");
        MsgDisp("主人公","Eh, are you not, ｛氷室＊＊｝?");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040622102_06_050");
        MsgDisp("Himuro","It's nonsense to answer a 
question with a question.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040622102_06_060");
        MsgDisp("Himuro","But, it's not a no.
If you want.");
        MsgDisp("主人公","I'm glad.
Thank you.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040622102_06_070");
        MsgDisp("Himuro","...No, maybe I'll invite you
here myself before that.");
        MsgDisp("主人公","Eh?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040622102_06_080");
        MsgDisp("Himuro","After coming here a few times with you,
I've started to think that this
place isn't so bad after all.");
        ChEye(6,3);
        ChMouth(6,4);
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        ChCheek(6,0);
        VoicePlay("B040622102_06_090");
        MsgDisp("Himuro","That is my new discovery.");
        MsgDisp("主人公","(｛氷室＊＊｝...)");
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
